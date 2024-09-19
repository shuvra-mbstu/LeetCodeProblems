class SmallestInfiniteSet {
    Set<Integer> numbers;
    PriorityQueue<Integer> pq;
            int smallest;

    public SmallestInfiniteSet() {
        numbers= new HashSet<>();
        pq = new PriorityQueue<>();
        smallest = 1;
    }
    
    public int popSmallest() {
        if(!pq.isEmpty()){
            int smallestNum = pq.poll();
            numbers.remove(smallestNum);
            return smallestNum;
        }
        else{
            return smallest ++;
        }
    }
    
    public void addBack(int num) {
        if(num < smallest && !numbers.contains(num)){
            numbers.add(num);
            pq.offer(num);
        }
    }
}

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet obj = new SmallestInfiniteSet();
 * int param_1 = obj.popSmallest();
 * obj.addBack(num);
 */