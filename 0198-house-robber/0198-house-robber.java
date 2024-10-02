class Solution {
    public int rob(int[] nums) { 
        int[] res = new int[nums.length + 2];
        for(int i=0; i<nums.length + 2; i++){
            res[i] =-1;
        }
        return houseSelection(0, nums, res);
    }
    int houseSelection(int current, int[] nums, int[] res){
        if(current>= nums.length) return 0;
        
        if(res[current]!= -1) return res[current];
        
        res[current] = Math.max(houseSelection(current+1, nums, res), houseSelection(current+2, nums, res)+nums[current]);
        
        return res[current];
    }
}