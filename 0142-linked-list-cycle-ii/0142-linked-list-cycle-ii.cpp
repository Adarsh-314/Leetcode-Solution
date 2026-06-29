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
        if(head == nullptr || head->next == nullptr) {
            return false;
        }
        int cnt = 0;
        ListNode* tail = head;
        while(tail->next != nullptr) {
            if (cnt > 10000) {
                return true;
            }
            tail = tail->next;
            cnt++;
        }
        return false;
    }
    
    ListNode *detectCycle(ListNode *head) {
     
        if (hasCycle(head) == false) {
            return nullptr;
        }
        
        int pos = 0;
        ListNode* temp = head; 
        
    
        for (int i = 0; i <= 10000; i++) {
            ListNode* mover = head;
            for (int j = 0; j <= pos; j++) {
                if (temp->next == mover) {
                    return mover; 
                }
                mover = mover->next;
            }
            
            pos++;
            temp = temp->next;
        }
        return nullptr;
    }
};
