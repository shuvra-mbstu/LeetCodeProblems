/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int pairSum(ListNode head) {
        if(head.next.next == null) return head.val + head.next.val;
                ListNode fast = head, slow = head;

        while(fast!= null && fast.next !=null){
            slow = slow.next;
            fast = fast.next.next;
        }
        
        ListNode secondHead = reverse(slow);
        // slow.next = null;
        System.out.println( "slow = " + slow.val + " secondHead = " + secondHead.val );
        int max = 0;
        while(secondHead != null && head != null){
            max = Math.max(max, secondHead.val + head.val);
                    System.out.println( "head = " + head.val + " secondHead = " + secondHead.val + " max = " + max );

            secondHead = secondHead.next;
            head = head.next;
        }
        return max;
    }
    ListNode reverse(ListNode node){
        ListNode prev = null;
        while(node != null){

            ListNode temp = node.next;
            node.next = prev;
            prev = node;
            node= temp;
                 // System.out.println( "node = " + node.val + " prev = " + prev.val );

        }
        
        return prev;
    }
}