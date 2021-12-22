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
    
    int vis[100005];
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        return findLeaf(root, 1);
    }
    
    int findLeaf(TreeNode* root, int coun){
        
        if(root == NULL) return INT_MAX;
        
        if(root ->left == NULL && root -> right == NULL) return coun;

        return min(findLeaf(root -> left, coun + 1), findLeaf(root -> right, coun + 1));
        
    }
};
