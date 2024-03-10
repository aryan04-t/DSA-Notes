#include<iostream>
#include<queue>
#include<algorithm> 
using namespace std;


class TreeNode{

    private: 
        
        int data; 
        TreeNode* left; 
        TreeNode* right; 

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
        // Maximum "height" or "depth", can be "total number of edges" or "total number of nodes" till the furthest leaf node of a tree. 

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


int main(){


    TreeNode obj; 
    TreeNode* root = obj.buildTree(); 

    cout << "This Binary Tree's Height is: " << obj.getHeight(root) << endl; 


    return 0;

}