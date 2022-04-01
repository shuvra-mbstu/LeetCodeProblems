class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int num = nums.size();
        int lo=nums[0], hi=nums[0], ans;
        
        for(int i=1; i<num; i++){
            lo = max(nums[i], lo);
            hi += nums[i];
        }
        
        ans = hi;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            
            int coun = 0, sum =0;
            for(int i=0; i<num; i++){
                
                if(sum + nums[i]> mid){
                    sum= nums[i];
                    coun++;
                }
                else sum += nums[i];
            }
            if(coun+1<=m){
                hi = mid-1;
                
                ans = mid;
                }
            else {
                lo = mid+1;

            }
            
        }
        return ans;
    }
};