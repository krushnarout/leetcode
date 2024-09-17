class Solution {
private:
    vector<int> nextSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> prevSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestArea(vector<int>& arr) {
        int n = arr.size();
        vector<int> next(n);
        next = nextSmallerElement(arr, n);

        vector<int> prev(n);
        prev = prevSmallerElement(arr, n);

        int area = INT_MIN;

        for (int i = 0; i < n; i++) {
            int l = arr[i];

            if (next[i] == -1) {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;

            int newArr = l * b;
            area = max(area, newArr);
        }
        return area;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> height(matrix[0].size(), 0);

        int maxi = INT_MIN;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < height.size(); j++) {
                if (matrix[i][j] == '1') {
                    height[j]++;
                } else
                    height[j] = 0;
            }
            maxi = max(maxi, largestArea(height));
        }
        return maxi;
    }
};
