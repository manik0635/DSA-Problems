class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0,head), *p=&dummy;
        while(p->next && p->next->next){
            ListNode* a=p->next;
            ListNode* b=a->next;
            a->next=b->next;
            b->next=a;
            p->next=b;
            p=a;
        }
        return dummy.next;
    }
};
