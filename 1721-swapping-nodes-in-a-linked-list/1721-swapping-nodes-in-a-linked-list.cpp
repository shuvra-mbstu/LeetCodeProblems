/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* second = head;
        ListNode* curr = head;
        
                if(head->next==NULL) return head;
        int val =1;
        while(curr!=NULL){
            curr = curr->next;
            
            if(val<k) first = first->next;
            
            if(val>k) second = second->next;     
            val++;
        }
        int tem = first->val;
        first->val = second->val;
        second->val = tem;
       
        return head;    

    }
};