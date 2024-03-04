#include<iostream>
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


int main(){


    TreeNode obj; 
    TreeNode* root = obj.buildTree(); 


    return 0;

}