class Solution {
    public int lengthOfLongestSubstring(String s) {
        int left=0, res =0;
        
        Map<Character,Integer> map = new HashMap<>();
        
        for(int i=0; i<s.length(); i++){
            if(map.containsKey(s.charAt(i))){
                            // System.out.println("left "+ left+ " res "+ res+" Char "+s.charAt(i)+ " i "+ i);
                int index = map.get(s.charAt(i));
                left = Math.max(left, index);
            }
            map.put(s.charAt(i), i+1);

            res = Math.max(res, i-left+1);
            
        }
        return res;
    }
}