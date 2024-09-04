class Solution {
    public int[] productExceptSelf(int[] nums) {
                int len = nums.length;

        int[] product = new int[len];
        
        product[len-1] = nums[len-1];
        for(int i=nums.length-2; i>0; i--){
            product[i] = product[i+1]*nums[i];
        }
        int value =1;
        for(int i=0; i<len-1; i++){
            product[i] = value * product[i+1];
            value = value * nums[i];
        }
        product[len-1]=value;
        return product;
    }
}