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
    void reorderList(ListNode* head) {
        vector<ListNode*> vt;
        
        ListNode* curr = head;
        
        while(curr!= NULL){
            vt.push_back(curr);
            
            curr = curr -> next;
        }
        
        int len = vt.size();
        ListNode* prev;
        
        for(int i = 0; i <= len/2; i++){
            prev = vt[i] -> next;
            vt[i] -> next = vt[len-i-1];
            vt[len-i-1] -> next = prev;
        }
        
        vt[len/2]->next = NULL;
        
    }
};