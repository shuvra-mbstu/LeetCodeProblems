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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* node = head; 
        
        ListNode* current_head = head;
        
        int size = 1;
        
        while(node->next != NULL){
            node = node -> next;
            size++;
        }
        
        k= size - (k%size);
        size = 1;
        
        while(size != k){
            head = head->next;
            size++;
        }
        
        node->next = current_head;
        current_head = head -> next;
        head->next = NULL;
        
        return current_head;
    }
};