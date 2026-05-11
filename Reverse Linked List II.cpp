class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        ListNode d(0, head), *p = &d;
        for (int i = 1; i < l; i++) p = p->next;
        ListNode *c = p->next, *n;
        for (int i = 0; i < r - l; i++) {
            n = c->next;
            c->next = n->next;
            n->next = p->next;
            p->next = n;
        }
        return d.next;
    }
};
