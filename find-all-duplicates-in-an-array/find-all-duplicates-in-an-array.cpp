class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int array[100005];
        
        vector<int> ans;
        memset(array, 0, sizeof(array));
        
        int len =nums.size();
        
        for(int i=0; i<len; i++){
            if(array[nums[i]]==1){
                ans.push_back(nums[i]);
            }
            array[nums[i]] ++;
        }
        
        return ans;
    }
};