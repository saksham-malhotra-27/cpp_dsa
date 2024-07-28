ListNode* midElement(ListNode* head){
    ListNode * slow = head;
    ListNode * fast = head->next;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

ListNode* merge(ListNode* head1, ListNode* head2) {
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->val >= head2->val) {
            temp->next = head2;
            head2 = head2->next;
        } else {
            temp->next = head1;
            head1 = head1->next;
        }
        temp = temp->next;
    }
    if (head1 != nullptr) {
        temp->next = head1;
    } else {
        temp->next = head2;
    }
    return dummy->next;
}

ListNode* mergesort (ListNode *head){
    if(head && head->next){
    ListNode * mid = midElement(head);
    ListNode* head2 = mid->next;
    mid->next=NULL;
    ListNode *  left  = mergesort(head);
    ListNode * right = mergesort(head2);
    return merge(left, right);
    }
    return head;
}





class Solution {
public:   
    ListNode* sortList(ListNode* head) {
        return mergesort(head);
    }
};