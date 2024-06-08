class Solution {
public:
    bool isPossible(vector<int>& nums, int n, int k, int mid) {
        int cnt = 1;
        int curr = 0;

        for (int i = 0; i < n; i++) {
            if (curr + nums[i] <= mid) {
                curr += nums[i];
            } else {
                cnt++;
                if (cnt > k || nums[i] > mid) {
                    return false;
                }
                curr = nums[i];
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int start = 0;
        int n = nums.size(); 
        int end = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (isPossible(nums, n, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};
