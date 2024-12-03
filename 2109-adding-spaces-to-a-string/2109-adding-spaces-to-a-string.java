class Solution {
    public String addSpaces(String s, int[] spaces) {
        
        int j=0;
        
        StringBuilder res = new StringBuilder();
        
        for(int i=0; i<s.length(); i++){
            if(j < spaces.length && i == spaces[j]){
                res.append(" ");
                j++;
            }
            res.append(s.charAt(i));
        }
        return res.toString();
    }
}