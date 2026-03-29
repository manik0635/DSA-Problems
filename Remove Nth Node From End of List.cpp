class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0,head), *f=&dummy, *s=&dummy;
        for(int i=0;i<n;i++) f=f->next;
        while(f->next) f=f->next, s=s->next;
        s->next=s->next->next;
        return dummy.next;
    }
};
