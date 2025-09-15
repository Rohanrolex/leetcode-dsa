class Solution {
public:
    string removeOuterParentheses(string s) {
        string p = "";
        int balance = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (balance > 0) p += ch;
                balance++;  
            } else {
                balance--;  // first reduce
                if (balance > 0) p += ch;
            }
        }
        return p;
    }
};
