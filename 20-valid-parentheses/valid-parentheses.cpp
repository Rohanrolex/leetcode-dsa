class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int p = s.size();
        
        for (int i = 0; i < p; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]); // Push opening brackets onto the stack
            } else {
                if (st.empty()) {
                    return false; // If stack is empty and we encounter a closing bracket, return false
                }
                
                char ch = st.top(); // Get top element from the stack
                st.pop(); // Remove it from the stack
                
                // Check if the current closing bracket matches the top of the stack
                if ((s[i] == ')' && ch == '(') || 
                    (s[i] == '}' && ch == '{') || 
                    (s[i] == ']' && ch == '[')) {
                    // If it matches, continue; otherwise, return false
                } else {
                    return false;
                }
            }
        }
        
        return st.empty(); // If the stack is empty, the string is balanced
    }
};