class Solution {
    public int trap(int[] height) {
        int left = 0, right = height.length-1;
        int count =0;
        int leftMax=height[0];
        int rightMax = height[right];
        
        while(left<right){
        // System.out.println("left " + height[left] + " leftMax " + leftMax + " right " + height[right] + " rightMax " + rightMax + " count " + count);
                leftMax = Math.max(leftMax, height[left]);
                rightMax = Math.max(rightMax, height[right]);
                int currentLevel = Math.min(leftMax, rightMax);


            if(height[left]<height[right]){
                
                
                if(height[left]< currentLevel)
                {
                    count += (currentLevel-height[left]);
                }
                left++;
            }
            else{                
                if(height[right] < currentLevel)
                count += (currentLevel-height[right]);
                
                right--;
            }
        }
        return count;
    }
}