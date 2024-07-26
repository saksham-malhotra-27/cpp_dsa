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
    ListNode* middleNode(ListNode* head) {
        ListNode* n1; 
        ListNode* n2;
        n1=head;
        n2=head;
        while(n2 && n2->next!=nullptr){
            n2=n2->next->next;
            n1=n1->next;
        }
        return n1;
    }
};