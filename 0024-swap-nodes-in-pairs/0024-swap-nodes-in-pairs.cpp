/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
       
        ListNode* temp = new ListNode(0);
        temp->next = head;
        
        ListNode* prev = temp;
        
       
        while (head != nullptr && head->next != nullptr) {
            
           
            ListNode* firstNode = head;
            ListNode* secondNode = head->next;
            
           
            prev->next = secondNode;
            firstNode->next = secondNode->next;
            secondNode->next = firstNode;
            
           
            prev = firstNode;        
            head = firstNode->next;   
        }
        
        ListNode* newHead = temp->next;
        delete temp; 
        
        return newHead;
    }
};