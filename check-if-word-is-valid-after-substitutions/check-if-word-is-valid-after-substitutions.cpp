class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a') {
                st.push(s[i]);
            } else if (s[i] == 'b') {
                if (!st.empty() && st.top() == 'a') {
                    st.push(s[i]);
                } else {
                    return 0;
                }
            } else {
                if (!st.empty() && st.top() == 'b') {
                    st.pop();
                    if (!st.empty() && st.top() == 'a') {
                        st.pop();
                    } else {
                        return 0;
                    }
                } else {
                    return 0;
                }
            }
        }
        return st.empty();
    }
};
