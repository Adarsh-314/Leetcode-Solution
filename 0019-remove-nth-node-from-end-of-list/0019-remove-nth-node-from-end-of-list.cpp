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
        int length=0;
        ListNode* temp = head;
        while (temp!=nullptr) {
            length++;
            temp=temp->next;
        } 
        temp = head;
        int delIndex=length-n;
        for (int i=1; i<length-n; i++) {
           
            temp=temp->next;

        }
        if (length ==1) return nullptr;
        
        if (temp==head && delIndex==0) {
            head=head->next;
            delete temp;
            return head;
            
        }
        ListNode* del=temp->next;
        temp->next=del->next;
        delete del;
        return head;
    }
};