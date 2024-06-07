class Solution {
public:
    bool isPossible(vector<int>& weights, int n, int days, int mid) {
        int dayCount = 1;
        int shipSum = 0;

        for (int i = 0; i < n; i++) {
            if (shipSum + weights[i] <= mid) {
                shipSum += weights[i];
            } else {
                dayCount++;
                if (dayCount > days || weights[i] > mid) {
                    return false;
                }
                shipSum = weights[i];
            }
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int n = weights.size();
        int e = accumulate(weights.begin(), weights.end(), 0);

        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (isPossible(weights, n, days, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};
