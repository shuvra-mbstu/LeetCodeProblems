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

      string ans = to_string(root->val);
        if(root->left == NULL && root->right == NULL) return ans;
      
        if(root->left != NULL){
          ans += childtree(root->left);
        }
      else ans += "()";
      
      if(root->right != NULL){
          ans += childtree(root->right);
        }
      
      return ans;
    }
  
  string childtree(TreeNode* root){
    if(root == NULL) return "()";
      
        string st ="";
      
      st += '(' + to_string(root->val);
    if(root->left == NULL && root->right == NULL) return st + ')';

          if(root->left != NULL){
            st += childtree(root->left);
          }
          else st += "()";

      if(root->right != NULL){
            st += childtree(root->right);
      }
      st += ')';
      
      return st;
  }
};