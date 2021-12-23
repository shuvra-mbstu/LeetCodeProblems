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
    int ans = 0;
    int diameterOfBinaryTree(TreeNode* root) {

        int x = diameter(root);

        return ans;
    }
    
    int diameter(TreeNode* root){
        if(root->left == NULL && root->right == NULL) return 0;
        
        int left = 0, right = 0;
        
        if(root->left != NULL)
            left = diameter(root -> left) + 1;
        
        if(root->right != NULL)
            right = diameter(root -> right) + 1;
        
        ans = max(left + right, ans);
        
        return max(left, right);
    }
};