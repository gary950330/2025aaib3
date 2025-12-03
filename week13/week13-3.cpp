// week13-3.cpp 學習計畫 Linked List 第三題
// LeetCode 2. Add Two Numbers 把鏈結串列Linked List 裡面的數
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;
        int carry = 0;
        while ( l1 != nullptr || l2 != nullptr ) {
           int now = carry;
           if (l1 != nullptr) {
               now += l1->val;
               l1 = l1->next;
           }
           if (l2 != nullptr) {
               now += l2->val;
               l2 = l2->next;
           }
           ans2->next = new ListNode(now % 10);
           ans2 = ans2->next;
           carry = now / 10;
        }
        if (carry>0) {
            ans2->next = new ListNode(carry);
        }
        return ans->next;
    }
};
