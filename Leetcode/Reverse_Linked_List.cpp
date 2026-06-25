/*
 * LeetCode #206 - Reverse Linked List (Easy)
 *
 * Approach: Iterative pointer reversal
 * Keep track of previous, current, and next nodes.
 * Reverse each link one by one in a single pass.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
