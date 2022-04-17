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
    TreeNode* ans = NULL, *tmp = NULL;
    void fun_inorder(TreeNode* root){
        if(!root)return;
        fun_inorder(root->left);
        if(!ans){
            ans = new TreeNode(root->val);
            tmp = ans;
        }
        else{
            tmp->right = new TreeNode(root->val);
            tmp = tmp->right;
        }
        fun_inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
         fun_inorder(root);
         return ans;
    }
};