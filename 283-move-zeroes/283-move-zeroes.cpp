class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len =nums.size();
        int coun=0;
        for(int i=0;i<len; i++){
            if(nums[i]==0)coun++;
        }
        remove(nums.begin(),nums.end(),0);
        for(int i=1;i<=coun;i++){
            nums[len-i]=0;
        }
    }
};