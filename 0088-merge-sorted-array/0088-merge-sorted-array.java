class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int len = m + n-1;
        int left = m-1;
        int right = n-1;
        
        while(left>=0 && right>=0){
            if(nums1[left] > nums2[right]){
                nums1[len--] = nums1[left--];
            }
            else{
                nums1[len--] = nums2[right--];
            }
        }
        
        while(right>=0){
            nums1[len--] = nums2[right--];
        }
    }
}