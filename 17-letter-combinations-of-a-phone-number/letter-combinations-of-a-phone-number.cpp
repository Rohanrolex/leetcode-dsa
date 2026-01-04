class Solution {
public:
    void printkeypad(string num, string curr, vector<string>& ans, vector<string>& output) {
        if (num.empty()) {
            output.push_back(curr);
            return;
        }
        
        int n1 = num[0] - '0'; // Convert first digit to int
        string letters = ans[n1]; // Get corresponding characters
        
        for (char ch : letters) {
            printkeypad(num.substr(1), curr + ch, ans, output);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> output;
        if (digits.empty()) return output; // Handle empty input case
        
        vector<string> ans = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        printkeypad(digits, "", ans, output);
        return output;
    }
};