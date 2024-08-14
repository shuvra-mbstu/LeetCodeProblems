class Solution {
    public String mergeAlternately(String word1, String word2) {
        int len1 = word1.length();
        int len2 = word2.length();
        StringBuilder merged = new StringBuilder();

        for(int i=0; i<len1 || i<len2; i++){
            if(i<len1){
                merged.append(word1.charAt(i));
            }
            if(i<len2){
                merged.append(word2.charAt(i));
            }
        }
        return merged.toString();
    }
}