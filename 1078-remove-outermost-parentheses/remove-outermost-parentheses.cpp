class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        stack<char> p;

        for (char c : s) {
            if (c == '(') {
                if (!p.empty()) {
                    result += c;
                }
                p.push(c);
            } else { // c == ')'
                p.pop();
                if (!p.empty()) {
                    result += c;
                }
            }
        }

        return result;
    }
};
