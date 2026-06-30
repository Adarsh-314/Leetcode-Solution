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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        ListNode* move = head; 
        while(temp!=NULL) {
            move=temp->next;
            while (move!=nullptr) {
                if(move->val>temp->val) {
                 v.push_back(move->val);
                 break;
                }
             move=move->next;
            }
            if(move==nullptr) {
                v.push_back(0);
            }
            temp=temp->next;

         
        }
        return v;
        
    }
};