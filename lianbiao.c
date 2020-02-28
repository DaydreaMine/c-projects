struct ListNode *insertionSortList(struct ListNode *head){
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct ListNode *x = (struct ListNode *)malloc(sizeof(struct ListNode));
    x->next = NULL;

    while (head != NULL)
    {
        struct ListNode *cur = x;
        struct ListNode *next = head->next;

        while (cur->next != NULL && cur->next->val < head->val)
        {
            cur = cur->next;
        }

        head->next = cur->next;
        cur->next = head;
        head = next;
    }

    return x->next;
}