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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *l;
        ListNode *r;
        l = head->next; r = l->next;
        if(r->next==NULL){
            l->next = NULL;
        }
        while(r->next!=NULL){
            int sum = l->val;
            while (r && r->next!=NULL && r->val != 0){
                sum+=r->val; r=r->next; 
            }

            l->val = sum;
             if (r == nullptr || r->next == nullptr) {
                l->next = nullptr;  // This ensures the last zero is removed
            } else {
                l->next = r;
                l = l->next;
                r = r->next;
            }
        }
        

        return head->next;
    }
};