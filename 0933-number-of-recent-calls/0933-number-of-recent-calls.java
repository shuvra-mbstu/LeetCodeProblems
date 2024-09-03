class RecentCounter {

    Deque<Integer> dq;
    public RecentCounter() {
        dq = new ArrayDeque<>();
    }
    
    public int ping(int t) {
        dq.addLast(t);
        
        while(!dq.isEmpty() && dq.peek()< t-3000)dq.removeFirst();
        
        return dq.size();
    }
}

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter obj = new RecentCounter();
 * int param_1 = obj.ping(t);
 */