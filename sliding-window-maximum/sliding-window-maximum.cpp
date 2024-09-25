class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;

        for (int i = 0; i < k; i++) {
            int element = nums[i];
            while (!dq.empty() && element > nums[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for (int i = k; i < nums.size(); i++) {
            ans.push_back(nums[dq.front()]);
            if (!dq.empty() && i - dq.front() >= k) {
                dq.pop_front();
            }

            int element = nums[i];
            while (!dq.empty() && element > nums[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};
