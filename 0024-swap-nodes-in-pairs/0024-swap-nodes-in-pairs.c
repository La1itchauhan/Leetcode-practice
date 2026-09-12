struct ListNode* swapPairs(struct ListNode* head) {
    // Base case: 0 or 1 node left
    if (head == NULL || head->next == NULL) return head;

    // Nodes to be swapped
    struct ListNode* first = head;
    struct ListNode* second = head->next;

    // Swap: first now points to the result of swapping the rest
    first->next = swapPairs(second->next);
    // second now points to first (the swap)
    second->next = first;

    // second is the new head of this pair
    return second;
}