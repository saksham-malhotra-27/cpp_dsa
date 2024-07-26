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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }

        ListNode *slow=head;
        ListNode * prev=nullptr;
        // if we do this that fast ko humne head start diya, then the prev in one case would be nullptr when we are accessing it:
        // like [1,2] here slow = 1, fast is 2 and prev is null, now in this case , the loop will not work, therefore, the value of prev will still remain null and then we are accessing it, so to remove this, what we can simply do is not give fast a head start, so that slow +1 and therefore prev will be initialized 
        ListNode *fast=head;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
       prev->next = prev->next->next;
       //slow->next = slow->next->next;
        return head;
    }
};