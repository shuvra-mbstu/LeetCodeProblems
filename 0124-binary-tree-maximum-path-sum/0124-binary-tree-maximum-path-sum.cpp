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
    int res = INT_MIN;

    int findMax(TreeNode* root){
         if(root == NULL) return 0;
                
        int left = max(0, findMax(root->left));
        
        int right = max(0, findMax(root->right));
        
        int value = root->val;

        res = max(res, value+left+right);
                
        return value + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        
        return max(res, findMax(root));
       
    }
};