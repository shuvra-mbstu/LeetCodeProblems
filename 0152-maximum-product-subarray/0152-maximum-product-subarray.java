class Solution {
    public int maxProduct(int[] nums) {
        int res =nums[0];
        int currMax = 1;
        int currMin = 1;
        
        for(int num : nums){
            if(num==0){
                currMax =1;
                currMin =1;
            }
            
            int temp = num *currMax;
            currMax = Math.max(currMax*num, Math.max(num, num*currMin));
            currMin = Math.min(temp, Math.min(num, num*currMin));
            
            res = Math.max(res, currMax);
        }
        return res;
    }
}