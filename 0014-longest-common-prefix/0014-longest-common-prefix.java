class Solution {
    public String longestCommonPrefix(String[] strs) {
        
        if(strs.length < 2) return strs[0];
        
        StringBuilder st = new StringBuilder(strs[0]);
        int j=0, k=0;
            
        for(int i=1; i< strs.length; i++){
            j=0;
            k=0;
            StringBuilder ss = new StringBuilder();
            
            while(j<st.length() && k< strs[i].length() && st.charAt(j) == strs[i].charAt(k)){
                ss.append(st.charAt(j));
                j++;
                k++;
            }
            st = ss;
        }
        return st.toString();
    }
}