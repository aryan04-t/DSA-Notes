#include<iostream>
#include<queue>
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


int main(){


    TreeNode obj; 
    TreeNode* root = obj.buildTree(); 

    obj.preorderTraversal(root); 


    return 0;

}