// week14-4.cpp 學習計畫 Linked List 最後一題 第4題 (要結合2,3題)
// LeetCode 445. Add Two Numbers II
class Solution {
public:
    // 今天的 week14-2.cpp 就是以下的幾行
    ListNode* myReverse(ListNode* head) {
        // 函式終止條件
        if (head==nullptr || head->next==nullptr) return head;

        ListNode* ans = myReverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return ans;
    }
    ListNode * addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myReverse(l1);
        ListNode* list2 = myReverse(l2);

        return myReverse( myAddTwoNumbers(list1, list2) );
    }
    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;
        int carry = 0;
        while (list1 !=nullptr || list2 != nullptr) {
            int now = carry;
            if (list1 != nullptr) {
                now += list1->val;
                list1 = list1->next;
            }
            if (list2 != nullptr) {
                now += list2->val;
                list2 = list2->next;
            }
            ans2->next = new ListNode( now%10 );
            ans2 = ans2->next;
            carry = now / 10;
        }
        if (carry>0) ans2->next = new ListNode(carry);

        return ans->next;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
