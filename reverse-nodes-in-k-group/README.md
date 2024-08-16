## [25. Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)

Given the `head` of a linked list, reverse the nodes of the list `k` at a time, and return the modified list.

`k` is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of `k` then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

### Example 1:

![reverse_ex1](https://github.com/user-attachments/assets/7ecc66a2-a34f-46bd-9228-cb538ecbf3b7)

```
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
```

### Example 2:

![reverse_ex2](https://github.com/user-attachments/assets/c2c7e5d1-fbad-439d-83b4-9d6c83df34bd)

```
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
```

### Constraints:

- The number of nodes in the list is `n`.
- `1 <= k <= n <= 5000`
- `0 <= Node.val <= 1000`

**Follow-up:** Can you solve the problem in `O(1)` extra memory space?
