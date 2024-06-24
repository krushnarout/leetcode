class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            bool swapped = false;
            for (int j = 0; j < n - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }
            if (swapped = false) {
                break;
            }
        }
        return (nums[n - 1] - 1) * (nums[n - 2] - 1);
    }
};
