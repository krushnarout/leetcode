## [74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

You are given an `m x n` integer matrix `matrix` with the following two properties:

- Each row is sorted in non-decreasing order.

- The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true` if `target` is in `matrix` or `false` otherwise.

You must write a solution in `O(log(m * n))` time complexity.

### Example 1:

![mat](https://github.com/user-attachments/assets/620038c1-fd65-4718-9d6d-e38c67bc4ca5)

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
```

### Example 2:

![mat2](https://github.com/user-attachments/assets/6960d34a-7924-44fe-8a1f-b9bbecb73379)

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
```

### Constraints:

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 100`
- `-10^4 <= matrix[i][j], target <= 10^4`
