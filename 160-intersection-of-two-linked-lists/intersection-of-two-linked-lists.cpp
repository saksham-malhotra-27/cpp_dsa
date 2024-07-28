/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;
        ListNode *head1 = headA;
        ListNode *head2 = headB;
        while(head1!=head2){
            head1= head1 ==nullptr? headB:head1->next;
            head2 = head2 == nullptr? headA: head2->next;
        }
        return head1;

    }
};