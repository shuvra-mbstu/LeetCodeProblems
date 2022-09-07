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
    string tree2str(TreeNode* root) {
      if(root == NULL) return "";
      
      return childtree(root);
    }
  
  string childtree(TreeNode* root){
    if(root == NULL) return "";
      
        string st = to_string(root->val);
      

          if(root->left != NULL){
            st += '(' + childtree(root->left) + ')';
          }

      if(root->right != NULL){
        
        if(!root->left) st += "()";
        
        st += '(' + childtree(root->right) + ')';
      }
      
      return st;
  }
};