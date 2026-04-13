class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode *prev = &dummy, *end = head;
        int i = 0;
        while (end) {
            i++;
            if (i % k == 0) {
                prev = reverse(prev, end->next);
                end = prev->next;
            } else end = end->next;
        }
        return dummy.next;
    }
    ListNode* reverse(ListNode* start, ListNode* end) {
        ListNode *prev = start, *cur = start->next, *first = cur;
        while (cur != end) {
            ListNode* nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        start->next = prev;
        first->next = cur;
        return first;
    }
};
