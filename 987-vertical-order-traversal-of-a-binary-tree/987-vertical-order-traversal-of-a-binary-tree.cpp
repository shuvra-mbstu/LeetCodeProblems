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
map<int, vector<pair<int, int>>> mp;
public:
    // function to recursively traverse through the tree, and append the every node based on the index being passed
// the logic of passing indices completely depends on the given condition of incrementing the current index by one for right node and decrementing the index by one for left node
// in case we get nodes with same indices we will store level of each node as well which will help us to sort the nodes based on index values
void preOrder(TreeNode *root, int ind, int lvl){
    if(root == NULL) return;
    mp[ind].push_back({lvl, root->val});
    preOrder(root->left, ind-1, lvl+1);        
    preOrder(root->right, ind+1, lvl +1);
}
vector<vector<int>> verticalTraversal(TreeNode* root) {
    preOrder(root, 0, 0);
    vector<vector<int>> ans;int k=0;
    for(auto i:mp){
		// sorting the nodes based on index value
        sort(i.second.begin(), i.second.end());
        ans.push_back({});
        for(auto j:i.second){
            ans[k].push_back(j.second);
        }
        k++;
    }
    return ans;
}
};