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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BST(0,nums.size()-1, nums);
    }
  TreeNode* BST(int low, int hi, vector<int>& nums){    
    int mid = (low + hi)/2;
    
    TreeNode* root = new TreeNode(nums[mid]);

    if(mid>low){
      root-> left = BST(low, mid-1, nums);
    }
   if(mid<hi){
      root-> right = BST(mid+1, hi, nums);
    } 
    return root;

  }
};