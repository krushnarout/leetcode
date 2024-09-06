## [84. Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)

Given an array of integers `heights` representing the histogram's bar height where the width of each bar is `1`, return the area of the largest rectangle in the histogram.

### Example 1:

![histogram](https://github.com/user-attachments/assets/f0f02fef-c670-4512-8ed2-daafd81a5eb5)

```
Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
```

### Example 2:

![histogram-1](https://github.com/user-attachments/assets/8d1e8070-bfc3-48c1-a2b9-8d8262cb2d9b)

```
Input: heights = [2,4]
Output: 4
```

### Constraints:

- `1 <= heights.length <= 10^5`
- `0 <= heights[i] <= 10^4`
