// week14-3.cpp 學習計畫 Linked List 第二周 另一種寫法
// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;
        while (head != nullptr) {
            a.push_back( head->val );
            head = head->next;
        }

        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for (int i=a.size()-1; i>=0; i--) {
            now->next = new ListNode( a[i] );
            now = now->next;
        }
        // return ans; 錯了
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
