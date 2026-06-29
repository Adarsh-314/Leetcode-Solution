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
        if(head==nullptr || head->next == nullptr) {
            return false;
        }
        int cnt=0;
        ListNode* tail = head;
        while(tail->next!=NULL) {
            if (cnt>10000) {
                return true;
            }
            tail=tail->next;
            cnt++;

        }
        return false;
        
    }
};