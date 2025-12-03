// week13-2.cpp 學習計畫 Linked List 第一周
// LeetCode 21. Merge Two Sorted Lists
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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = ListNode(); // 錯誤的寫法 少了new
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        while (list1 != nullptr && list2 != nullptr){
            if (list1->val <= list2->val){
                now->next = list1;
                list1 = list1->next;
                now = now->next;
            } else {
                now->next = list2;
                list2 = list2->next;
                now = now->next;
            }
        }
        // 收尾了
        if (list1 != nullptr) now->next = list1;
        if (list2 != nullptr) now->next = list2;
        return ans->next;
    }
};
