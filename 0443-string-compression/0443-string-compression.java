class Solution {
    public int compress(char[] chars) {
        StringBuilder st = new StringBuilder();
        
        int counter =0, j=0;
        for(int i=0; i<chars.length; i++){
            chars[j++] = chars[i];
            counter=1;
            while(i+1<chars.length && chars[i] == chars[i+1]){
                counter++;
                i++;
            }
            if(counter>1){
                String ss = new String(Integer.toString(counter));
                for(int k=0; k<ss.length() ;k++){
                  chars[j++] = ss.charAt(k);
                }
            }
        }
        return j;
    }
}