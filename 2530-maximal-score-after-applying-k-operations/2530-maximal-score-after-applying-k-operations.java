import java.util.*;

class Solution {
    public long maxKelements(int[] nums, int k) {
        PriorityQueue<Integer> q = new PriorityQueue<>(Collections.reverseOrder());
        for (int num : nums) {
            q.add(num);
        }
        
        long sum = 0;
        for (int i = 0; i < k; i++) {
            int top = q.poll();
            sum += top;
            int newVal = (top % 3 == 0) ? top / 3 : top / 3 + 1;
            q.add(newVal);
        }
        return sum;
    }
}