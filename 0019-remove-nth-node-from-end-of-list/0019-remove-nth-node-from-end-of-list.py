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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
      ListNode* prev = NULL;
      ListNode* current = head;
      
      if(head->next == NULL) return NULL;
      
     while(n>1){
       current = current ->next;
       n--;
     }
      
      while(current->next != NULL){
        current = current->next;
        
        if(prev == NULL)
          prev = head;
        else prev = prev->next;
      }
      

      if(prev == NULL) return head->next;
      
      prev->next = prev->next->next;

      return head;
    }
};