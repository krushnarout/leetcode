class Solution {
public:
    void find(vector<int>& prices, int i, int& min, int& max) {
        if (i == prices.size())
            return;

        if (min > prices[i])
            min = prices[i];
        if (max < (prices[i] - min))
            max = prices[i] - min;
        find(prices, i + 1, min, max);
    }
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int max = INT_MIN;
        find(prices, 0, min, max);
        return max;
    }
};
