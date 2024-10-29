## [94. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)

Given the root of a binary tree, return the inorder traversal of its nodes' values.

### Example 1:

```
Input: root = [1,null,2,3]

Output: [1,3,2]
```

Explanation:

![screenshot-2024-08-29-202743 (1)](https://github.com/user-attachments/assets/5a89ed54-0b51-48a5-a990-3c6753664ef3)

### Example 2:

```
Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [4,2,6,5,7,1,3,9,8]
```

Explanation:

![tree_2 (1)](https://github.com/user-attachments/assets/2b7f586a-d4dd-4dc7-af91-3d375a911f9c)

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
