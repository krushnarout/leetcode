class Solution {
public:
    bool isValid(string s) {
        stack<char> helper;

        int i = 0;
        while (i < s.length()) {
            if (s[i] == ')' && helper.size() > 0 && helper.top() == '(') {
                helper.pop();
            } else if (s[i] == '}' && helper.size() > 0 &&
                       helper.top() == '{') {
                helper.pop();
            } else if (s[i] == ']' && helper.size() > 0 &&
                       helper.top() == '[') {
                helper.pop();
            } else {
                helper.push(s[i]);
            }
            i++;
        }
        if (helper.size() == 0) {
            return true;
        }
        return false;
    }
};
