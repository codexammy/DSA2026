# Blind 75 — 24 Easy + 6 Hard | Full C++ Solutions

Complete, compilable LeetCode C++ solutions. Each file is self-contained
and uses the correct LeetCode class/function signatures.

---

## Easy Problems (24)

| # | Problem | Algorithm | Time | Space |
|---|---------|-----------|------|-------|
| 1 | Two Sum | Hash Map | O(n) | O(n) |
| 2 | Best Time to Buy and Sell Stock | Single Pass / Greedy | O(n) | O(1) |
| 3 | Contains Duplicate | Hash Set | O(n) | O(n) |
| 4 | Valid Anagram | Frequency Count | O(n) | O(1) |
| 5 | Valid Parentheses | Stack | O(n) | O(n) |
| 6 | Maximum Subarray | Kadane's Algorithm | O(n) | O(1) |
| 7 | Climbing Stairs | DP / Fibonacci | O(n) | O(1) |
| 8 | Reverse Linked List | Iterative Pointer Reversal | O(n) | O(1) |
| 9 | Linked List Cycle | Floyd's Two Pointers | O(n) | O(1) |
| 10 | Merge Two Sorted Lists | Iterative Merge | O(m+n) | O(1) |
| 11 | Invert Binary Tree | Recursive DFS | O(n) | O(h) |
| 12 | Maximum Depth of Binary Tree | Recursive DFS | O(n) | O(h) |
| 13 | Same Tree | Recursive DFS | O(n) | O(h) |
| 14 | Balanced Binary Tree | Bottom-up DFS | O(n) | O(h) |
| 15 | Binary Search | Binary Search | O(log n) | O(1) |
| 16 | Flood Fill | DFS | O(m×n) | O(m×n) |
| 17 | Lowest Common Ancestor of a BST | BST Property Traversal | O(h) | O(1) |
| 18 | Implement Trie (Prefix Tree) | Trie with Array Children | O(m) | O(m·n) |
| 19 | Valid Palindrome | Two Pointers | O(n) | O(1) |
| 20 | Missing Number | Gauss' Formula | O(n) | O(1) |
| 21 | Counting Bits | DP + Bit Shift | O(n) | O(n) |
| 22 | Number of 1 Bits | Brian Kernighan's Algorithm | O(k) | O(1) |
| 23 | House Robber | DP (space-optimized) | O(n) | O(1) |
| 24 | Min Stack | Two Stacks | O(1) per op | O(n) |

---

## Hard Problems (6)

| # | Problem | Algorithm | Time | Space |
|---|---------|-----------|------|-------|
| 25 | Word Search II | Trie + Backtracking DFS | O(M·N·4·3^L) | O(W·L) |
| 26 | Merge k Sorted Lists | Min-Heap (Priority Queue) | O(N log k) | O(k) |
| 27 | Trapping Rain Water | Two Pointers | O(n) | O(1) |
| 28 | Serialize and Deserialize Binary Tree | BFS Level-order | O(n) | O(n) |
| 29 | Word Ladder | Bidirectional BFS | O(M²·N) | O(M²·N) |
| 30 | Median of Two Sorted Arrays | Binary Search on Partition | O(log(min(m,n))) | O(1) |

---

## Notes

- `h` = tree height (O(log n) for balanced, O(n) worst-case)
- `L` = max word length, `W` = number of words
- `k` = number of lists, `m`, `n` = sizes of respective inputs
- All solutions compile directly on LeetCode without modification
