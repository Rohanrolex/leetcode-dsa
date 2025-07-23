class Solution {
public:
    pair<string, int> removePattern(const string& s, const string& pattern, int score) {
        stack<char> st;
        int result = 0;

        for (char c : s) {
            if (!st.empty() && st.top() == pattern[0] && c == pattern[1]) {
                st.pop();
                result += score;
            } else {
                st.push(c);
            }
        }

        // Build remaining string
        string remaining;
        while (!st.empty()) {
            remaining += st.top();
            st.pop();
        }
        reverse(remaining.begin(), remaining.end());
        return {remaining, result};
    }

    int maximumGain(string s, int x, int y) {
       

        if (x > y) {
            auto [s1, score1] = removePattern(s, "ab", x);
            auto [s2, score2] = removePattern(s1, "ba", y);
            return score1 + score2;
        } else {
            auto [s1, score1] = removePattern(s, "ba", y);
            auto [s2, score2] = removePattern(s1, "ab", x);
            return score1 + score2;
        }
    }
};
