/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNodes(struct ListNode* head) {
    if (head==NULL || head->next==NULL) return head;
    struct ListNode *n = removeNodes(head->next);
    if(n->val > head->val)
    return n;
    head->next=n;
    return head;
    
}