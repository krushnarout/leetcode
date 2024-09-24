class Solution {
public:
    vector<double> getCollisionTimes(vector<vector<int>>& cars) {
        vector<double> answer(cars.size(), -1);
        stack<int> st;
        for (int i = cars.size() - 1; i >= 0; --i) {
            while (!st.empty() && cars[st.top()][1] >= cars[i][1]) {
                st.pop();
            }

            while (!st.empty()) {
                double collTime = (double)(cars[st.top()][0] - cars[i][0]) / (cars[i][1] - cars[st.top()][1]);
                if (answer[st.top()] == -1 || collTime <= answer[st.top()]) {
                    answer[i] = collTime;
                    break;
                }
                st.pop();
            }
            st.push(i);
        }
        return answer;
    }
};
