# Leetcode-113.-Path-Sum-II
# Path Sum II – Binary Tree Problem

This repository contains a C++ solution to the classic **Path Sum II** problem in binary trees. The goal is to find all root-to-leaf paths in a binary tree where the sum of the node

values equals a given target sum.

## 📌 Problem Statement

Given the `root` of a binary tree and an integer `targetSum`, return all root-to-leaf paths where the sum of the node values in the path equals `targetSum`.

A **root-to-leaf** path is a path starting from the root and ending at any leaf node. A **leaf** is a node with no children.

### Example

```text
Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22

Output:
[
  [5,4,11,2],
  [5,8,4,5]
]
```


✅ Approach
We use Depth-First Search (DFS) to traverse the tree.

Maintain a running sum and a path vector.

When a leaf node is reached, we check if the current path’s sum equals targetSum.

If yes, we save that path.

Backtracking is used to explore all possible root-to-leaf paths.

---


🧠 Algorithm
Traverse the tree recursively using DFS.

At each node:

Add the node’s value to the path.

Check if it's a leaf and if the path sum equals targetSum.

If valid, store the path in the result.

Backtrack and continue the search.

---

💻 Code Explanation
hlo() is the recursive helper function that:

Checks for nullptr.

Adds the current node to the path vector.

Checks if the current node is a leaf and the path sum equals targetSum.

Performs recursive calls to left and right children.

Uses backtracking to remove the last node after recursive calls.

pathSum() is the main function that:

Handles the edge case of a null root with target sum 0.

Calls the helper and returns all valid paths.

---

🛠️ Technologies Used
Language: C++

Data Structures: Binary Tree, Vectors

Algorithm: DFS, Backtracking

---


👨‍💻 Author
Ridham Garg

B.Tech Computer Engineering

Thapar University, Patiala

Roll Number: 102203014

📬 Contact

For any queries, feel free to reach out via LinkedIn or email.

