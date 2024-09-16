class Solution {
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        Set<Integer> visitedRooms = new HashSet<>();
        
        Stack<Integer>stk = new Stack<>();
        
        stk.push(0);
        visitedRooms.add(0);
        while(!stk.isEmpty()){
            int roomNumber = stk.pop();
            for(int i=0; i<rooms.get(roomNumber).size(); i++){
                int currentKey = rooms.get(roomNumber).get(i);
                if(visitedRooms.add(currentKey)){
                    stk.push(currentKey);
                }
            }
            if(visitedRooms.size() == rooms.size())return true;
        }
        return false;
    }
}