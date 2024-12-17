class Solution {
    public String repeatLimitedString(String s, int rl) {
        Map<Character, Integer> map = new HashMap<>();
        for (char c : s.toCharArray()){
            map.put(c, map.getOrDefault(c, 0) + 1);
        }
        
        PriorityQueue<Character> pq = new PriorityQueue<>((a, b) -> b - a);
        pq.addAll(map.keySet());

        StringBuilder sb = new StringBuilder();
        while(pq.size() > 0){
            char curr = pq.poll();

            for(int i=0; i<rl && map.get(curr) >0 ; i++){
                sb.append(curr);
                map.put(curr, map.get(curr) - 1);
            }
            
            if(map.get(curr) > 0 && !pq.isEmpty()){
                char next = pq.poll();
                sb.append(next);
                map.put(next, map.get(next) -1);
                
                pq.add(curr);
                if(map.get(next) > 0){
                    pq.add(next);
                }
            }
        }

        return sb.toString();
    }
}