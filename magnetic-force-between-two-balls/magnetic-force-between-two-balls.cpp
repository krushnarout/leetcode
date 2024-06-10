class Solution {
public:
    bool isPossible(vector<int>& position, int m, int n, int mid) {
        int lastPos = position[0];
        int ballCount = 1;
        for (int i = 0; i < n; i++) {
            if (position[i] - lastPos >= mid) {
                ballCount++;
                if (ballCount >= m)
                    return true;
                lastPos = position[i];
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int start = 0;
        int n = position.size();
        int end = position[n - 1] - position[0];
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (isPossible(position, m, n, mid)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};
