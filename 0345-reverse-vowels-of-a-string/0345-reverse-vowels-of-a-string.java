class Solution {
    public String reverseVowels(String s) {
        Set<Character> vowels = new HashSet<>(Arrays.asList(new Character[]{'a','e','i','o','u','A','E','I','O','U'}));
        
        char [] ss = s.toCharArray();

        for(int i=0, j=s.length()-1; i<j; ){
            if(!vowels.contains(ss[i])){
                i++;
            }
            else if(!vowels.contains(ss[j])){
                j--;
            }
            else{
                char temp = ss[i];
                ss[i] = ss[j];
                ss[j] = temp;
                i++;
                j--;
            }
            
        }
        return String.valueOf(ss);
    }
}