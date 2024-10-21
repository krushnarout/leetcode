## [144. Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)

Given the root of a binary tree, return the preorder traversal of its nodes' values.

### Example 1:

```
Input: root = [1,null,2,3]

Output: [1,2,3]

Explanation:
```

![screenshot-2024-08-29-202743](https://github.com/user-attachments/assets/0b1d182b-f9e7-4fb6-8a5c-2413443ee5b9)

### Example 2:

```
Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [1,2,4,5,6,7,3,8,9]

Explanation:
```

![tree_2](https://github.com/user-attachments/assets/858e4def-745c-457f-9f21-8c297ca37253)

### Example 3:

```
Input: root = []

Output: []
```

### Example 4:

```
Input: root = [1]

Output: [1]
```

### Constraints:

- The number of nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

Follow up: Recursive solution is trivial, could you do it iteratively?
