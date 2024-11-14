class Solution {
    public boolean isPalindrome(String s) {
        
        boolean palindrome = true;
        
        int left =0, right = s.length()-1;
        
        while(left < right){
            while(!Character.isLetterOrDigit(s.charAt(left)) && left<right)left++;
            while(!Character.isLetterOrDigit(s.charAt(right)) && left<right)right--;
            
            if(Character.toLowerCase(s.charAt(left)) != Character.toLowerCase(s.charAt(right))){
                palindrome = false;
                break;
            }
            left++;
            right--;
        }
        return palindrome;
    }
}