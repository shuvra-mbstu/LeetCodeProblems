class Solution {
    public int countSubstrings(String s) {
        int count =0;
        
        for(int i=0; i<s.length(); i++){
            count += extendPalindrome(s,i,i);
            count += extendPalindrome(s, i, i+1);
        }
        return count;
    }
    
    private int extendPalindrome(String s, int ind1, int ind2){
        if(ind1>=0 && ind2 <s.length() && s.charAt(ind1)==s.charAt(ind2)){
            return 1 + extendPalindrome(s, ind1-1, ind2+1);
        }
        return 0;
    }
}