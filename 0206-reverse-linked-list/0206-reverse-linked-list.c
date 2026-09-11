struct ListNode* reverseList(struct ListNode* head) {
    // Base case: if list is empty or has only one node
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    // Recursively reverse the rest of the list
    struct ListNode* reversedListHead = reverseList(head->next);
    
    // Reverse the pointer between the current node and the next node
    head->next->next = head;
    
    // Break the original forward link to prevent a cycle
    head->next = NULL;
    
    // Return the new head of the reversed list
    return reversedListHead;
}