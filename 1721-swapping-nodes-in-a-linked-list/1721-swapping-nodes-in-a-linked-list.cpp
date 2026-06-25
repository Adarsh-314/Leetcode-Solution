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
        int length = 0;
        ListNode* temp = head;
        ListNode* tail = head;
        while (temp!=nullptr) {
            length++;
            temp=temp->next;
            if(tail->next!=nullptr) tail=tail->next;            
        }
        temp=head;
        ListNode* left=head;
        ListNode* right=head;
        for (int i=1; i<=length; i++) {
            if (i==k) {
                left=temp;
                break;
            }
            temp=temp->next;
        }
        temp=head;
        for (int i=1;  i<=length; i++) {
            if (i==length-k+1) {
                right=temp;
                break;
            }
            temp=temp->next;
        }
        swap(left->val, right->val);
        return head;

        
    }
};