class Solution {
public:
    bool isPossible(vector<int>& price, int k, int n, int mid) {
        int count = 1;
        int prev = price[0];

        for (int i = 1; i < n; i++) {
            if (price[i] - prev >= mid) {
                count++;
                if (count >= k) {
                    return true;
                }
                prev = price[i];
            }
        }
        return false;
    }

    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        int start = 0;
        int n = price.size();
        int end = price[n - 1] - price[0];
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (isPossible(price, k, n, mid)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};
