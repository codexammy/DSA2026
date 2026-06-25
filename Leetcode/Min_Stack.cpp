/*
 * LeetCode #155 - Min Stack (Easy)
 *
 * Approach: Two Stacks
 * Maintain a main stack and a min stack. The min stack always holds the
 * minimum element at or below the corresponding level in the main stack.
 *
 * Time Complexity:  O(1) per operation
 * Space Complexity: O(n)
 */

#include <stack>
#include <algorithm>
using namespace std;

class MinStack {
    stack<int> st;
    stack<int> minSt;
public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        if (st.top() == minSt.top()) minSt.pop();
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};
