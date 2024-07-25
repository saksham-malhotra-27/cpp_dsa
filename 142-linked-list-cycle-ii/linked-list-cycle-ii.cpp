class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow-> next; 
            if(fast==slow){ break; }
        }

        if((fast && fast->next == nullptr)||(!fast)){
            return NULL;
        }

        // loop freakingly exists 
        slow = head;
        while(true){
            if(fast==slow){ break; }
            fast = fast->next;
            slow = slow-> next; 
        }

        return slow;
        
    }
};