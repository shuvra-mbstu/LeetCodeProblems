class Solution {
    public String decodeString(String s) {
        Stack<StringBuilder> stringStack = new Stack<>();
        Stack<Integer> countStack = new Stack<>();
        int currentNumber=0;
        StringBuilder res = new StringBuilder();
        
        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            // System.out.println("currentNum = "+ currentNumber + " ch = "+ ch+ " res = "+res);
            if(Character.isDigit(ch)){
                currentNumber = currentNumber * 10 + (ch-'0'); 
            }
            else if(ch == '['){
                stringStack.push(res);
                countStack.push(currentNumber);
                
                res = new StringBuilder();
                currentNumber = 0;
            }
            else if(ch == ']'){
                int num = countStack.pop();
                StringBuilder ss = stringStack.pop();
                
                for(int j=0; j<num; j++){
                    ss.append(res);
                }
                res = ss;
            }
            else res.append(ch);
        }
        return res.toString();
    }
}