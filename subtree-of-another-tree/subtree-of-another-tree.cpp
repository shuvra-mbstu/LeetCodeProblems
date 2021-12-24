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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        return root && (findSubTree(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
    }
    
    bool findSubTree(TreeNode* root, TreeNode* subRoot){
        if(root == NULL && subRoot == NULL ) return true;
    
        return root && subRoot && root->val == subRoot->val && findSubTree(root->left, subRoot->left) && findSubTree(root->right, subRoot->right);
    }
};