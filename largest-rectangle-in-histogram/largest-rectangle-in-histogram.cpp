class Solution {
private:
    vector<int> next(vector<int>& heights, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> v(n);
        for (int i = n - 1; i >= 0; i--) {
            int num = heights[i];
            while (s.top() != -1 && heights[s.top()] >= num) {
                s.pop();
            }
            v[i] = s.top();
            s.push(i);
        }
        return v;
    }

    vector<int> prev(vector<int>& heights, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            int num = heights[i];
            while (s.top() != -1 && heights[s.top()] >= num) {
                s.pop();
            }
            v[i] = s.top();
            s.push(i);
        }
        return v;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nxt(n);
        nxt = next(heights, n);
        vector<int> prv(n);
        prv = prev(heights, n);
        int maxArea = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (nxt[i] == -1) {
                nxt[i] = n;
            }
            int w = nxt[i] - prv[i] - 1;
            int area = w * heights[i];
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
