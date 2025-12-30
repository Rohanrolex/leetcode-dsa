class Solution {
public:
    bool isPalindrome(int x) {
        string p = to_string(x);
        string q = p;
        reverse(q.begin() , q.end());
        return p == q;
    }
};