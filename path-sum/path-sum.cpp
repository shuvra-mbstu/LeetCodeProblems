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
    int target;
    bool hasPathSum(TreeNode* root, int targetSum) {
        target = targetSum;

        return foundSum(root, 0);
    }
    
    bool foundSum(TreeNode* root, int sum){
        if(root == NULL)  return false;
        
        if(root->left == NULL && root->right == NULL) return sum + root->val == target;
        
        return foundSum(root->left, sum + root->val) || foundSum(root->right, sum + root->val);
        
    }
};