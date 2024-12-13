class Solution {
    public String longestPalindrome(String s) {
        int len =0, left=0, right=0;
        
        for(int i=0; i<s.length(); i++){
            int currLen = Math.max(palindromeLength(i, i, s), palindromeLength(i, i+1, s));

            if(currLen>right-left){
                left = i-(currLen-1)/2;
                right = i+(currLen/2);
            }
        }
        return s.substring(left, right+1);
    }
    private int palindromeLength(int left, int right, String s){
        int len = s.length();
        while(left>=0 && right<len && s.charAt(left)==s.charAt(right)){
                left--;
                right++;
            }
        return right-left-1;
    }
}