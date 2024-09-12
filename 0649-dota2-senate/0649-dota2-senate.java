class Solution {
    public String predictPartyVictory(String senate) {
        Queue<Integer> Rad = new LinkedList<>();
        Queue<Integer> Dir = new LinkedList<>();
        
        for(int i=0; i<senate.length(); i++){
            if(senate.charAt(i) == 'R'){
                Rad.offer(i);
            }
            else{
                Dir.offer(i);
            }
        }
        while(!Rad.isEmpty() && !Dir.isEmpty()){
            int r = Rad.poll();
            int d = Dir.poll();
            
            if(r<d){
                Rad.offer(senate.length()+r);
            }
            else{
                Dir.offer(senate.length()+d);
            }
        }
        return Rad.isEmpty() ? "Dire" :"Radiant";
    }
}