## [1019. Next Greater Node In Linked List](https://leetcode.com/problems/next-greater-node-in-linked-list/)

You are given the `head` of a linked list with `n` nodes.

For each node in the list, find the value of the next greater node. That is, for each node, find the value of the first node that is next to it and has a strictly larger value than it.

Return an integer array `answer` where `answer[i]` is the value of the next greater node of the `ith` node (1-indexed). If the `ith` node does not have a next greater node, set `answer[i] = 0`.

### Example 1:

![linkedlistnext1](https://github.com/user-attachments/assets/26388448-6e85-4627-a298-16b2d91e5af3)

```
Input: head = [2,1,5]
Output: [5,5,0]
```

### Example 2:

![linkedlistnext2](https://github.com/user-attachments/assets/a9d8ac13-82c0-48cc-987a-2f139f555120)

```
Input: head = [2,7,4,3,5]
Output: [7,0,5,5,0]
```

### Constraints:

- The number of nodes in the list is `n`.
- `1 <= n <= 10^4`
- `1 <= Node.val <= 10^9`
