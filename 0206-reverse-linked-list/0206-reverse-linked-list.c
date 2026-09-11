/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* nextTemp = NULL;
    
    while (curr != NULL) {
        // 1. Store the next node so we don't lose the rest of the list
        nextTemp = curr->next;
        
        // 2. Reverse the pointer of the current node
        curr->next = prev;
        
        // 3. Move 'prev' and 'curr' one step forward
        prev = curr;
        curr = nextTemp;
    }
    
    // 'prev' will be pointing to the new head at the end of the loop
    return prev;
}
