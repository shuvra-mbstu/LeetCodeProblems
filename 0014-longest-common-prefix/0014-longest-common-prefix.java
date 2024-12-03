class Solution {
    public String longestCommonPrefix(String[] strs) {
        
        if(strs.length < 2) return strs[0];
        
        StringBuilder st = new StringBuilder();
        int j=0, k=0;
            
            while(j<strs[0].length() && k<strs[1].length() && strs[0].charAt(j)== strs[1].charAt(k)){
                st.append(strs[0].charAt(j));
                j++;
                k++;
            }
                
        for(int i=2; i< strs.length; i++){
            j=0;
            k=0;
            String temp = new String(strs[i]);
            StringBuilder ss = new StringBuilder();
            
            while(j<st.length() && k< strs[i].length() && st.charAt(j) == temp.charAt(k)){
                ss.append(st.charAt(j));
                j++;
                k++;
            }
            st = ss;
        }
        return st.toString();
    }
}