class Solution {
    public boolean isValid(String s) {
        Stack<Character> stk = new Stack<Character> ();
        
        for(int i=0; i<s.length(); i++){
            Character current = s.charAt(i);
            
            if(current == '('){
                stk.push(')');
            }
            else if(current == '{'){
                stk.push('}');
            }
            else if(current == '['){
                stk.push(']');
            }
            else{
                if(stk.empty() || stk.pop() != current) return false;
                
            }
        }
        return stk.empty() ? true : false;
    }
}