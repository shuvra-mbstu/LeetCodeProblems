class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int left = 0, res =0, odd=0, count=0;
        
        
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]%2){
                odd++;
                
                if(odd>=k){
                    count=1;
                    while(!(nums[left++]%2)) count++;
                    
                    res += count;
                }
            }
            else if( odd>= k) res += count;
        }
        return res;
    }
};