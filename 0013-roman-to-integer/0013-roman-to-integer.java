class Solution {
    public int romanToInt(String s) {
        Map<Character,Integer> map = new HashMap<>();
        
        map.put('I', 1);
        map.put('V', 5);
        map.put('X', 10);
        map.put('L', 50);
        map.put('C', 100);
        map.put('D', 500);
        map.put('M', 1000);
        
        int res = 0;
        int len = s.length();
        for(int i=0; i<len; i++){
            int val1 = map.get(s.charAt(i));
            
            if(i+1<len && map.get(s.charAt(i+1))>val1){
                res += (map.get(s.charAt(i+1)) - val1);
                i++;
            }
            else {
                res += val1;
            }
            // System.out.println(res);
        }
        return res;
    }
}