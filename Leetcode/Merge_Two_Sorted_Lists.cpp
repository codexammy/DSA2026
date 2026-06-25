/*
 * LeetCode #21 - Merge Two Sorted Lists (Easy)
 *
 * Approach: Iterative merge with dummy head
 * Use a dummy head node to simplify edge cases.
 * Repeatedly attach the smaller of the two current nodes.
 *
 * Time Complexity:  O(m + n)
 * Space Complexity: O(1)
 */

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        tail->next = list1 ? list1 : list2;
        return dummy.next;
    }
};
