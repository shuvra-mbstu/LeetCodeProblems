class Solution {
    public String convert(String s, int numRows) {
        
        if(numRows == 1 || s.length() <= numRows) return s;
        
        StringBuilder[] ss = new StringBuilder[numRows];
        
        for(int i=0; i<numRows; i++){
            ss[i] = new StringBuilder();
        }
        int currentRow = 0;
        Boolean goingDown = true;
        for(char c : s.toCharArray()){
            ss[currentRow].append(c);
            
            if(currentRow == 0 || currentRow == numRows-1) goingDown = !goingDown;
            
            currentRow += goingDown ? -1 : 1;
        }
        
        StringBuilder res = new StringBuilder();
        
        for(int i=0; i<numRows; i++){
            res.append(ss[i]);
        }
        return res.toString();
    }
}