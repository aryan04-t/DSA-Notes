#include<iostream>
#include<queue>
#include<algorithm> 
using namespace std;


class TreeNode{

    private: 
        
        int data; 
        TreeNode* left; 
        TreeNode* right; 

        int getDiameterHelper(TreeNode* root, int &diameter);

    public: 
        
        TreeNode() : data(-1), left(nullptr), right(nullptr) {} 
        TreeNode(int _data) : data(_data), left(nullptr), right(nullptr) {} 

        TreeNode* buildTree(); 
        
        void levelOrderTraversal(TreeNode* root); 
        void levelWiseOutputOfBinaryTreeSLevelOrderTraversal(TreeNode* root);
        
        void inorderTraversal(TreeNode* root);
        void preorderTraversal(TreeNode* root);
        void postorderTraversal(TreeNode* root); 

        int getHeight(TreeNode* root);
        int getDiameter(TreeNode* root);
        // The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root. 
        // The length of a path between two nodes is represented by the number of edges between them. 

};


TreeNode* TreeNode::buildTree(){

    int data;
    cout << "Enter Node's Data: ";
    cin >> data;

    if(data == -1){
        return nullptr;
    }

    TreeNode* root = new TreeNode(data); 
 
    root->left = buildTree(); 
    root->right = buildTree(); 

    return root; 

}


void TreeNode::levelOrderTraversal(TreeNode* root){

    queue<TreeNode*> q;

    q.push(root); 
    
    while(!q.empty()){

        TreeNode* temp = q.front(); 

        q.pop();

        if(temp->left != nullptr){
            q.push(temp->left); 
        }

        if(temp->right != nullptr){
            q.push(temp->right); 
        }

        cout << temp->data << " ";

    } 

}


void TreeNode::levelWiseOutputOfBinaryTreeSLevelOrderTraversal(TreeNode* root){

    queue<TreeNode*> q;

    q.push(root); 
    q.push(nullptr); 

    while(!q.empty()){

        TreeNode* temp = q.front(); 

        if(temp == nullptr){
            
            cout << endl;
            q.pop();
            
            if(!q.empty()){
                q.push(nullptr);
            }

            continue;
        
        }

        q.pop();

        if(temp->left != nullptr){
            q.push(temp->left); 
        }

        if(temp->right != nullptr){
            q.push(temp->right); 
        }

        cout << temp->data << " ";

    } 

}


void TreeNode::inorderTraversal(TreeNode* root){

    if(root == nullptr){
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);

}


void TreeNode::preorderTraversal(TreeNode* root){

    if(root == nullptr){
        return;
    }

    cout << root->data << " "; 
    preorderTraversal(root->left); 
    preorderTraversal(root->right); 

}


void TreeNode::postorderTraversal(TreeNode* root){

    if(root == nullptr){
        return; 
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";

}


int TreeNode::getHeight(TreeNode* root){

    if(root == nullptr){
        return 0;
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1; 

}


int TreeNode::getDiameterHelper(TreeNode* root, int &diameter){

    if(root == nullptr){
        return 0;
    }

    int leftHeight = getDiameterHelper(root->left, diameter); 
    int rightHeight = getDiameterHelper(root->right, diameter); 

    diameter = max(leftHeight + rightHeight, diameter);

    return max(leftHeight, rightHeight) + 1;

}


int TreeNode::getDiameter(TreeNode* root){

    int diameter = 0;
    getDiameterHelper(root, diameter);

    return diameter;

}


int main(){


    TreeNode obj; 
    TreeNode* root = obj.buildTree(); 

    cout << "Diameter of this Binary Tree is: " << obj.getDiameter(root) << endl; 
    

    return 0;

}