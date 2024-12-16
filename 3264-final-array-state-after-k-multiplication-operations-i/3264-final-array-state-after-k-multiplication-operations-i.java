// class Solution {
//     public int[] getFinalState(int[] nums, int k, int multiplier) {
//         PriorityQueue<int[]> pq = new PriorityQueue <>((a,b)-> Integer.compare(a[0], b[0]));
        
//         for(int i=0; i<nums.length; i++){
//             pq.add(new int[]{nums[i], i});
//         }
//         while(k>0){
//             int[] num = pq.poll();
//             int value = num[0];
//             int index = num[1];
            
//             value *= multiplier;
            
//             nums[index] = value ;
//             pq.add(new int[]{value, index});
//             k--;
//         }

//         return nums;
//     }
// }

class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {
        int min, index;

        for(int i=0; i<k; i++)
        {
            index=0;
            min=nums[0];
            for(int j=0; j<nums.length; j++)
            {
                if(min>nums[j])
                {
                    min=nums[j];
                    index=j;
                }
            }
            nums[index]=nums[index]*multiplier;
        }

        return(nums);
    }
}