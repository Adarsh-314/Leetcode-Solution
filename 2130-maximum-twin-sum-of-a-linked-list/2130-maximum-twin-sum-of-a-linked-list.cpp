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
    int pairSum(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        int length=0;
        while(temp!=nullptr) {
            length++;
            v.push_back(temp->val);
            temp=temp->next;
        }
        int pairSum=v[0]+v[length-1];
        for (int i=1; i<=(length/2)-1; i++) {
            pairSum = max (pairSum, v[i]+v[length-i-1]);

        }
        return pairSum;
        
    }
};