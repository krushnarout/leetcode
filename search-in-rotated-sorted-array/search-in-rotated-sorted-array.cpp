class Solution {
public:
    int getPivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;

        while (s < e) {

            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }

    int binarySearch(vector<int>& nums, int s, int e, int target) {
        int mid = s + (e - s) / 2;

        while (s <= e) {

            if (nums[mid] == target) {
                return mid;
            }

            if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums);

        if (target >= nums[pivot] && target <= nums.back()) {
            return binarySearch(nums, pivot, nums.size() - 1, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};
