class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        int n = position.size();

        for (int i = 0; i < n; i++) {
            pair<int, int> p;
            p.first = position[i];
            p.second = speed[i];
            cars.push_back(p);
        }

        sort(cars.begin(), cars.end());

        stack<float> st;
        for (int i = 0; i < cars.size(); i++) {
            float time = (target - cars[i].first) / (float)cars[i].second;
            if (st.empty()) {
                st.push(time);
            } else {
                while (!st.empty() && time >= st.top()) {
                    st.pop();
                }
                st.push(time);
            }
        }
        return st.size();
    }
};
