class Solution {
    public String addSpaces(String s, int[] spaces) {
        
        int j=0, prev =0;
        
        StringBuilder res = new StringBuilder();
        
        for(int i=0; i<spaces.length; i++){
            res.append(s.substring(prev, spaces[i])).append(" ");
            prev = spaces[i];
        }
        return res.append(s.substring(prev)).toString();
    }
}