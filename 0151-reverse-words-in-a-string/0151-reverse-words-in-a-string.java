class Solution {
    public String reverseWords(String s) {
        Stack<String> words = new Stack<String>();
        
        for(String word : s.trim().split(" ")){
            if(!word.isEmpty()){
                words.push(word);
            }
        }
        
        StringBuilder sb = new StringBuilder();
        
        while(!words.isEmpty()){
            sb.append(words.pop());
            sb.append(" ");
        }
        return sb.toString().trim();
    }
}