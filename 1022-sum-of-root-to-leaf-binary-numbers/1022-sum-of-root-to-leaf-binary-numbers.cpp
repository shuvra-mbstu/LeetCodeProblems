/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : (0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string>vt;
    
    int sumRootToLeaf(TreeNode* root) {

        if( root->left == NULL && root-> right == NULL) return root->val;
        path(root, "");
        
        int len = vt.size();
        
        int ans=0;
        
        for(int i=0; i<len; i++){
            // cout<< vt[i]<<endl;
            
            string s = vt[i];
            
            int value=1;
            for(int j=s.size()-1; j>=0; j--){
                
                if(s[j]=='1')ans += value;
                
                value *= 2;
            }
        }
        
        return ans;
    }
    
    void path(TreeNode* root, string st){
        string ss = st;
        
        if(root->val == 0) ss += '0';
        else ss += '1';
        
        if(root->left == NULL && root-> right == NULL){
            vt.push_back(ss);
            return;
        }
        
        if(root->left != NULL){
               path(root->left, ss);
        }
        
        if(root->right != NULL){
               path(root->right, ss);
        }
        
    }
};