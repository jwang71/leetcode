#include<iostream>
#include<vector>
#include<stack>
#include "Tree.h"

using namespace std;


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root,res);
        return res;
    }
    void inorder(TreeNode* root,vector<int>& res){
        if(root){
            inorder(root->left,res);
            res.push_back(root->val);
            inorder(root->right,res);
        }
    }
};

class Solution2 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* curNode=root;
        while(curNode||!s.empty()){
            if(curNode){
                s.push(curNode);
                curNode=curNode->left;
            }else{
                curNode=s.top();
                s.pop();
                res.push_back(curNode->val);
                curNode=curNode->right;
            }
        }
        return res;
    }
};
