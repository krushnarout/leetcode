class Solution {
public:
    int lowerBound(vector<int>& arr, int x) {
        int s = 0;
        int e = arr.size() - 1;
        int ans = e;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] >= x) {
                ans = mid;
                e = mid - 1;
            } else if (x > arr[mid]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return ans;
    }

    vector<int> binarySearch(vector<int>& arr, int k, int x) {
        int h = lowerBound(arr, x);
        int l = h - 1;
        while (k--) {
            if (l < 0) {
                h++;
            } else if (h >= arr.size()) {
                l--;
            } else if (x - arr[l] > arr[h] - x) {
                h++;
            } else {
                l--;
            }
        }
        return vector<int>(arr.begin() + l + 1, arr.begin() + h);
    }

    vector<int> twoPtrMethod(vector<int>& arr, int k, int x) {
        int l = 0;
        int h = arr.size() - 1;
        while (h - l >= k) {
            if (x - arr[l] > arr[h] - x) {
                l++;
            } else {
                h--;
            }
        }
        return vector<int>(arr.begin() + l, arr.begin() + h + 1);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return binarySearch(arr, k, x);
    }
};
