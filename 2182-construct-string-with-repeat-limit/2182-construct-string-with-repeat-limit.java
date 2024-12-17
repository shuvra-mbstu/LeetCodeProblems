class Solution {
    public String repeatLimitedString(String s, int repeatLimit) {
        Map<Character,Integer> mp = new HashMap<>();
        
        int len = s.length();
        
        for(int i=0; i<len; i++){
            mp.put(s.charAt(i), 1+mp.getOrDefault(s.charAt(i), 0));
        }
        PriorityQueue<Character> pq = new PriorityQueue<>((a,b)->b-a);
        
        pq.addAll(mp.keySet());
        
        StringBuilder res = new StringBuilder();
        
        while(!pq.isEmpty()){
            char entry = pq.poll();
            
            for(int i=0; i<repeatLimit && mp.get(entry)>0; i++){
                res.append(entry);
                mp.put(entry, mp.get(entry)-1);
            }
            
            if(mp.get(entry)>0 && !pq.isEmpty()){
                char next = pq.poll();
                res.append(next);
                mp.put(next, mp.get(next)-1);
                
                if(mp.get(next)>0){
                    pq.add(next);
                }
                pq.add(entry);
            }
        }
        return res.toString();
    }
}