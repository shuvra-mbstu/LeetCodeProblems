class Solution {
    public int[] successfulPairs(int[] spells, int[] potions, long success) {
        
        Arrays.sort(potions);
        
        int[] res = new int[spells.length];
        
        for(int i=0; i<spells.length; i++){
            int left =0, right = potions.length-1;
            
            while(left<=right){
                int mid = left + (right-left)/2;
                long multi = (long) potions[mid] * spells[i];
                
                if( multi< success){
                    left = mid + 1;
                }
                else right = mid-1;
            }
            res[i] = potions.length - left;
        }
        return res;
    }
}