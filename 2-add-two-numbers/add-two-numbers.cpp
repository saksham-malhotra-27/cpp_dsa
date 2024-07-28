class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * n1 = l1;
        ListNode * n2 = l2;
        ListNode *n3 = new ListNode(-1);
        ListNode * head = n3;
        int carry=0; int dig=0;
        while(n1 != nullptr || n2 != nullptr){
            int sum = 0; int dig;
            if (n1!=nullptr && n2!= nullptr ){
                sum = n1->val + n2->val + carry;
                dig = sum % 10; n1=n1->next; n2=n2->next;
                
            } else if(n1!=nullptr) {
                    sum = n1->val + carry;
                    dig = sum % 10; n1=n1->next;
                    
            } else {
                sum = n2->val + carry;
                dig = sum % 10;
                n2=n2->next;

            }
                ListNode * n = new ListNode(dig);
                n3->next = n; 
                n3=n3->next;
                carry = sum / 10;
        }
        if(carry>0){
            ListNode * last  = new ListNode(carry);
            n3->next = last;
        }
        return head->next;
    }
};