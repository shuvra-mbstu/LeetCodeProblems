class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int len = nums.size();
        for(int i= len-1; i>1; i--){
            if(nums[i]< nums[i-1]+nums[i-2]) return nums[i]+nums[i-1]+nums[i-2];
        }
        
        return 0;
    }
};