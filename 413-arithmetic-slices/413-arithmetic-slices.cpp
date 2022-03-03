class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int len = nums.size();
        
        int count=0, siz=0;
        
        if(len<3)return count;
        
        int dif= nums[1]-nums[0];

        for(int i=1; i<len-1; i++){
            
            int val = (nums[i+1]-nums[i]);

            if(val == dif)siz++;
            else{
                dif = val;
                count += (siz*(siz+1))/2;
                siz=0;
            }
        }
        count += (siz*(siz+1))/2;

        return count;
    }
};