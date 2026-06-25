/*
 * LeetCode #141 - Linked List Cycle (Easy)
 *
 * Approach: Floyd's Tortoise and Hare (Two Pointers)
 * Slow pointer moves one step, fast pointer moves two steps.
 * If there is a cycle, they will eventually meet.
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
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }
};
