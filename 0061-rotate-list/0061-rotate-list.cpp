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
        ListNode* temp = head;
        int length=0;
        while (temp!=nullptr) {
            length++;
            temp=temp->next;
        }
        if (length==k || length==0 ||k%length==0 || length==1) {
            return head;
        }
        
        if(k>length) {
          k=k%length;
        }

        int cnt=0;
        while (cnt<k) {
            temp = head->next;
            ListNode* prev=head;
            while (temp->next!=nullptr) {
                temp=temp->next;
                prev=prev->next;
            }
            temp->next=head;
            prev->next=nullptr;
            head=temp;
            cnt++;

        }
        return head;

        
    }
};