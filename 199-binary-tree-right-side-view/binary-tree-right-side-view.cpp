/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preOrder(TreeNode* root, int level, vector<int>&result){}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        tree(root,0,res);
        return res;


    }

    void tree(TreeNode* root, int level, vector<int>& res){
        if(root==NULL) return;

        if(level == res.size()){
            res.push_back(root->val);
        }
        tree(root->right,level+1,res);
        tree(root->left,level+1,res);
    }
};