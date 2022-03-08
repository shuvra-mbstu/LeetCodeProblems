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
    bool hasCycle(ListNode *head) {
        if(head==NULL)return false;
        
        if(head -> next == NULL || head ->next->next == NULL)return false;
        
        return findCycle(head->next,head->next->next);
    }
    
    bool findCycle(ListNode *node1, ListNode *node2){
        
        if(node1 == node2) return true;
        
        if(node1== NULL || node2==NULL || node1->next == NULL || node2->next == NULL)return false;
        
        return findCycle(node1->next, node2->next->next);
    }
};