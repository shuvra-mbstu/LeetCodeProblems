class Solution {

    public List<List<Integer>> permute(int[] nums) {
        
        List<Integer> numList = new ArrayList<>();
        List<Integer> cur = new ArrayList<>();
            List<List<Integer>> res = new ArrayList<>();

        for(int num : nums){
            numList.add(num);    
        }
        
        permuteHelper(numList, cur, res);
        return res;
    }
    
    private void permuteHelper(List<Integer> nums, List<Integer> curList, List<List<Integer>> res){
        if(nums.isEmpty()){
            res.add( new ArrayList<>(curList));
            return;
        }
        
        for(int i=0; i<nums.size(); i++){
            int num = nums.remove(i);
            curList.add(num);
            
            permuteHelper(nums, curList, res);
            
            curList.remove(curList.size()-1);
            nums.add(i, num);
        }
    }
}