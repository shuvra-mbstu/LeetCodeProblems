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
    bool findTarget(TreeNode* root, int k) {
      // cout<<"FT : "<<root->val<<endl;
        // if (root->val == k) return false;
      return find(root, root, k);
    }
  
  bool find(TreeNode* node1, TreeNode* node2, int &k){
    // cout<<node->val<<endl;
        if (!node1 || !node2) return false;
        if (node1->val + node2->val < k) return find(node1->right, node2, k) || find(node1, node2->right, k);
        if (node1->val + node2->val > k) return find(node1->left, node2, k) || find(node1, node2->left, k);
        return node1 != node2 || find(node1->left, node2->right, k);
    }
};