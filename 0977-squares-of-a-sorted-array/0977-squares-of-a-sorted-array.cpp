class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size();
        
        vector<int> res(len);
        int left=0, right=len-1, ind=len-1;
        
        while(left<=right){
            
            if(nums[left]*nums[left]<nums[right]*nums[right]){
                res[ind]= nums[right]*nums[right];
                right--;
            }
            else{
                 res[ind]= nums[left]*nums[left];
                left++;
            }
            // cout<<res[i<<" "<<end;
            ind--;
        }
        return res;
    }
};