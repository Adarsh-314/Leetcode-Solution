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
    int getDecimalValue(ListNode* head) {
        int length=0;
        int ans=0;
        ListNode* temp=head;
        while(temp!=nullptr) {
            length++;
            temp=temp->next;
        }
        temp=head;
        int i = 1;
        while(temp!=nullptr) {
           ans += (temp->val)*pow(2, length-i);
           temp=temp->next;
           i++;
        }
        return ans;
        
    }
};