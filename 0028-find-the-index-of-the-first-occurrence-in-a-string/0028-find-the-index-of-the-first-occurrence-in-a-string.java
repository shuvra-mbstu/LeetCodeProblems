class Solution {
    public int strStr(String haystack, String needle) {
        
        int nLen = needle.length();
        
        for(int i=0; i<=(haystack.length() - nLen); i++){
            int x = 1;
            for(int j =0; j<nLen; j++){
                if(haystack.charAt(i+j) != needle.charAt(j)){
                    x=-1;
                    break;
                }
            }
            if(x==1) return i;
        }
        return -1;
    }
}