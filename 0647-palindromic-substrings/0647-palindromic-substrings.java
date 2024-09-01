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
        int total =0;
        while(ind1>=0 && ind2 <s.length() && s.charAt(ind1)==s.charAt(ind2)){
            total++;
            ind1--;
            ind2++;
        }
        return total;
    }
}