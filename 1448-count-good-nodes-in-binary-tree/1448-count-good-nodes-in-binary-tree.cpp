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
    int goodNodes(TreeNode* root) {
        return nodeCounting(root, root->val);
    }
  
  int nodeCounting(TreeNode* root, int val){
    if(root == NULL) return 0;
    
    int count = 0;
    
    if(val <= root->val){
      count++;
      val = root->val;
    }
        
    if(root-> left == NULL && root->right == NULL)return count;

    count += nodeCounting(root->left, val);
    count += nodeCounting(root->right, val);
    
    return count;
  }
};