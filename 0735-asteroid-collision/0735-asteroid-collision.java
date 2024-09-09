class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        Stack<Integer> st = new Stack<>();
        
        for(int i=0; i<asteroids.length; i++){
            if(asteroids[i]<0){
                while(!st.isEmpty() && st.peek()> 0 && -1 * asteroids[i] > st.peek()) st.pop();
                
                if(!st.isEmpty() && st.peek() == -1 * asteroids[i])st.pop();
                else if(st.isEmpty() || st.peek()<0) st.push(asteroids[i]);
            }
            else{
                st.push(asteroids[i]);
            }
        }
        int[] res = new int[st.size()];
        for(int i=st.size()-1; i>=0; i--){
            res[i]=st.pop();
        }
        return res;
    }
}