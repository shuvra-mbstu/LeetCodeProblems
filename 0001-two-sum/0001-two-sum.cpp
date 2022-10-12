class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int len = nums.size();
        
        for(int i=0; i<len; i++){
            if(mpp[target-nums[i]]){
                return {  mpp[target-nums[i]]-1, i};
            }
            mpp[nums[i]]=i+1;
        }
        return {};
    }
};