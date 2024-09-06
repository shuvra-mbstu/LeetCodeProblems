class Solution {
    Boolean isVowel(Character ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')return true;
        return false;
    }
    public int maxVowels(String s, int k) {
        int i=1,j=0,maxCounter=0, count=0;
        for(;j<k;j++){
            Character ch = s.charAt(j);
            if(isVowel(ch)){
                count++;
            }
        }
        maxCounter = Math.max(maxCounter, count);
          for(;j<s.length();i++,j++){
            Character ch = s.charAt(j);
            Character ch2 = s.charAt(i-1);
            if(isVowel(ch)){
                count++;
            }
            if(isVowel(ch2)){
                count--;
            }
            maxCounter = Math.max(maxCounter, count);
 
        }
        return maxCounter;
    }
}