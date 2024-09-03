class Solution {
    List<Integer> getElementsOnlyInFirstList(int[] nums1, int[] nums2){
        Set<Integer> dist1 = new HashSet<>();
        Set<Integer> dist2 = new HashSet<>();
        
        for(int i=0; i<nums1.length; i++){
            dist1.add(nums1[i]);
        }
        
        for(int i=0; i<nums2.length; i++){
            if(!dist1.contains(nums2[i]))
               dist2.add(nums2[i]);
        }
        return new ArrayList<>(dist2);
    }
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        
        return Arrays.asList(getElementsOnlyInFirstList(nums2, nums1), getElementsOnlyInFirstList(nums1, nums2));
    }
}