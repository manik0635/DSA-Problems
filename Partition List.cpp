class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode l1(0), l2(0), *p1 = &l1, *p2 = &l2;
        while (head) {
            if (head->val < x) p1->next = head, p1 = p1->next;
            else p2->next = head, p2 = p2->next;
            head = head->next;
        }
        p2->next = NULL;
        p1->next = l2.next;
        return l1.next;
    }
};
