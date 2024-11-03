## [145. Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)

Given the `root` of a binary tree, return the postorder traversal of its nodes' values.

### Example 1:

```
Input: root = [1,null,2,3]

Output: [3,2,1]

Explanation:
```

![screenshot-2024-08-29-202743 (2)](https://github.com/user-attachments/assets/277856b7-be7d-4f0a-8251-b53e43ac003e)

### Example 2:

```
Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [4,6,7,5,2,9,8,3,1]

Explanation:
```

![tree_2 (2)](https://github.com/user-attachments/assets/cc1deaab-a7b5-412f-a95b-571962b787d3)

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

- The number of the nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`
