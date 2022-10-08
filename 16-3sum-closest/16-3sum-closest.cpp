class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int len = nums.size();
        
        int dif =INT_MAX;
        
        for(int i=0; i<len && dif != 0; i++){
            
            int lo = i+1;
            int hi = len-1;
            
            while(lo < hi){
                int sum = nums[i] + nums[lo] + nums[hi];
                
                if(abs(target-sum) < abs(dif)){
                    
                    dif = target - sum;
                }
                if(sum < target){
                    lo++;
                }
                else{
                    hi--;
                }
            }
        }
        return target - dif;
    }
};