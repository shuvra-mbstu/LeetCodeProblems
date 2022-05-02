class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int odd=0, even=nums.size()-1;
        
        while(odd<even){
            while(nums[odd]%2 == 0 && odd<even) odd++;
            
            while(nums[even]%2 && even>odd)even--;
            
            if(odd<even)swap(nums[odd], nums[even]);
        }
        return nums;
    }
};