class Solution {
    public boolean isSubsequence(String s, String t) {
        int counts = 0;
        
        for(int i=0; i<t.length() && counts<s.length(); i++){
            if(s.charAt(counts)==t.charAt(i)){
                counts++;
            }
        }
        return counts == s.length();
        
    }
}