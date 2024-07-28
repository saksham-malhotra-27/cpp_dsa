class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode * prev = NULL; 
        ListNode * curr = head;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next=prev;
            prev  = curr ; 
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
       ListNode * slow = head;
       ListNode * fast = head->next;
       while(fast && fast->next){
            fast = fast->next->next;
            slow=slow->next;
       }
       ListNode* rev = reverse(slow->next);
       slow->next = NULL;
       while(rev != NULL){
        if(head->val != rev->val) return false;
        head=head->next; rev=rev->next;
       }

       return true;
};
};