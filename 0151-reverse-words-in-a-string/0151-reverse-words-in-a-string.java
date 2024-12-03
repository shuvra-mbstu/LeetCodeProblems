class Solution {
    public String reverseWords(String s) {
        String[] array = s.trim().split("\\s+");
        StringBuilder res = new StringBuilder();
        
        for(int i=array.length -1; i>=0; i--){
            res.append(array[i]);
            
            if(i!=0) res.append(" ");
        }
        return res.toString();
    }
}