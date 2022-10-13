/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
      ListNode* next, prev;
      
        while(node->next != NULL){
          next = node->next;
          node->val = next->val;
          if(next->next==NULL){
            node->next = NULL;
          }
          else{
            node = next;
          }
        }
    }
};