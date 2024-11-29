class Solution {
    public void rotate(int[] nums, int k) {
        int len = nums.length;
        k %= len;
        int count =0;
        
        for(int i=0; count<len; i++){
            int preInd = i;
            int preVal = nums[preInd];
            
            do {
                int nextInd = (preInd + k) % len;
                
               int temp = nums[nextInd];
                nums[nextInd] = preVal;
                preInd = nextInd;
                preVal = temp;
                count++;
            }
            while(preInd != i);
        }
    }
}