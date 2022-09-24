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
  vector<vector<int>> ans;
  
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      vector<int> x;
    
      visit(root, targetSum, x);
      return ans;
    }
  
  void visit(TreeNode* node, int target, vector<int> vt){
    if(node == NULL) return;

    vt.push_back(node->val);

    if(target - (node->val) == 0 && node->left == NULL && node->right == NULL){
        ans.push_back(vt);
        return;
    }
    
    if(node->left != NULL){
      visit(node->left, target - (node->val), vt);
    }
  
    if(node->right != NULL){
      visit(node->right, target - (node->val), vt);
    }
    return;
  }
    
};