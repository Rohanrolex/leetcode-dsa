
class Solution {
public:
    // helper to check palindrome
    bool isPalindrome(const string &p) {
        int left = 0, right = p.size() - 1;
        while (left < right) {
            if (p[left] != p[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    // recursive function
    void func(string s, vector<vector<string>> &ans, vector<string> &v) {
        if (s.empty()) {
            ans.push_back(v);
            return;
        }

        for (int len = 1; len <= s.size(); len++) {
            string x = s.substr(0, len);
            if (isPalindrome(x)) {
                v.push_back(x);
                string y = s.substr(len);   // remainder of the string
                func(y, ans, v);
                v.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        func(s, ans, v);
        return ans;
    }
};
