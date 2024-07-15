class Solution {
public:
    int expandAroundIndex(string s, int left, int right) {
        int count = 0;
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int totalCount = 0;
        int n = s.length();

        for (int center = 0; center < n; center++) {
            int oddAns = expandAroundIndex(s, center, center);
            totalCount = totalCount + oddAns;

            int evenAns = expandAroundIndex(s, center, center + 1);
            totalCount = totalCount + evenAns;
        }
        return totalCount;
    }
};
