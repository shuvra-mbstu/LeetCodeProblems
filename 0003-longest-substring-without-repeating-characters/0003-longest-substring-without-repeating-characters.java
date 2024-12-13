class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character, Integer> present = new HashMap<>();
        
        int left=0, res =0;
        
        for(int right=0; right<s.length(); right++){
            char c = s.charAt(right);
            
            if(present.containsKey(c) ){
                left = Math.max(left, present.get(c)+1);
            }
            present.put(c, right);
             res = Math.max(res, right-left+1);
        }
        return res;
    }
}