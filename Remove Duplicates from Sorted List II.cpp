class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode *prev = &dummy;
        while (head) {
            if (head->next && head->val == head->next->val) {
                int x = head->val;
                while (head && head->val == x) head = head->next;
                prev->next = head;
            } else {
                prev = head;
                head = head->next;
            }
        }
        return dummy.next;
    }
};
