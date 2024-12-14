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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry =0;
        ListNode head = new ListNode(0);
        
        ListNode temp = head;
        
        while(l1 != null || l2 != null || carry>0){
            temp.next = new ListNode(0);
            temp = temp.next;
            int val = 0;
            
            if(l1!= null) {
                val += l1.val;
                l1 = l1.next;
            }
            if(l2!=null){
                val+= l2.val;
                l2=l2.next;
            }
            
            temp.val = (val + carry)%10;
            
            carry = (val + carry)/10;

        }
        return head.next;
    }
}