class Solution {
    public int maxArea(int[] height) {
        int left =0, right = height.length-1,maxSum=0;
        left = 0;
        
        while(left<right){
            maxSum = Math.max(maxSum, (Math.min(height[left], height[right])*(right-left)));
            if(height[left]<height[right])left++;
            else right--;
        }
        return maxSum;
    }
}