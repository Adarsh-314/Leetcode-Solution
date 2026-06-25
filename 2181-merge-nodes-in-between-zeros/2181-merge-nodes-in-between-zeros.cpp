class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head; // Start at the initial 0
        ListNode* prev = nullptr;
        int firstTime = 0;

 
        while (temp != nullptr && temp->next != nullptr) {
            int sum = 0;
            
    
            temp = temp->next;
            
           
            while (temp->val != 0) {
                sum += temp->val;
                temp = temp->next;
            }
            
            temp->val = sum;
            
           
            if (firstTime == 0) {
                head = temp;  
                prev = temp;
                firstTime++;
            } else {
                prev->next = temp; 
                prev = temp;
            }
        }

        return head;
    }
};