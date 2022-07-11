class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int len = nums.size();
        
        vector<vector<int>> res;
        
        for(int i=0; i<len && nums[i] <= 0; i++){
            
            if(i == 0 || nums[i -1] != nums[i]){
                twosum(nums, i, res);
            }
        }
        return res;
    }
    
    void twosum(vector<int>& nums, int i, vector< vector<int>> &res){
        unordered_set<int> visited;
        
        for (int j = i+1; j<nums.size(); j++){
            
            int val = -nums[i] - nums[j];
            
            if(visited.count(val)){
                res.push_back({nums[i], nums[j], val});
                
                while(j+1 < nums.size() && nums[j] == nums[j+1]) ++j;
            }
            visited.insert(nums[j]);
        }
    }
};