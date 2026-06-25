/*
 * LeetCode #23 - Merge k Sorted Lists (Hard)
 *
 * Approach: Min-Heap (Priority Queue)
 * Push the head of each list into a min-heap. Repeatedly extract the minimum
 * node, append it to the result list, and push its next node (if any).
 *
 * Time Complexity:  O(N log k) where N = total nodes, k = number of lists
 * Space Complexity: O(k) for the heap
 */

#include <queue>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
    struct Cmp {
        bool operator()(ListNode* a, ListNode* b) { return a->val > b->val; }
    };
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Cmp> pq;
        for (ListNode* node : lists)
            if (node) pq.push(node);

        ListNode dummy(0);
        ListNode* tail = &dummy;
        while (!pq.empty()) {
            ListNode* node = pq.top(); pq.pop();
            tail->next = node;
            tail = tail->next;
            if (node->next) pq.push(node->next);
        }
        return dummy.next;
    }
};
