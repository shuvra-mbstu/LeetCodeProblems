class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {        
int arr[10007] = {0};        
        int len = nums.size();
        
        for(int i=0; i<len; i++){
            arr[nums[i]] += nums[i];
        }
    
        int last = 0;
        int ans=0;
        
        for(int i=1; i<=10000; i++){
            int current = max(ans, last+arr[i]);
            
            last = ans;
            ans = current;
        }
        
       return ans;
    }
    
};