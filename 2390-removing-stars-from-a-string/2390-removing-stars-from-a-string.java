class Solution {
    public String removeStars(String s) {
        Stack<Character> st = new Stack<>();
        
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)=='*'){
               if(!st.isEmpty()) st.pop();
            }
            else{
                st.push(s.charAt(i));
            }
        }
        String res ="";
        while(!st.isEmpty()){
            res = st.pop() + res;
        }
        return res;
    }
}