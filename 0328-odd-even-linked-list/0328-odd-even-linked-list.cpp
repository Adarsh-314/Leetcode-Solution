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
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next==NULL ||  head->next->next==NULL ) {
            return head;
        }
        vector<int>v;
        vector<int>k;
        ListNode* temp = head;
        while (temp!=NULL) {
            v.push_back(temp->val);  
            temp=temp->next;          

        }
        temp=head;
        for(int i=0; i<v.size(); i+=2) {
            k.push_back(v[i]);
        }
        for(int i=1; i<v.size(); i+=2) {
            k.push_back(v[i]);
        }
        int i=0;
        while (temp!=NULL) {
            temp->val=k[i];
            i++;
            temp=temp->next;         

        }
        return head;

        
        
    }
};