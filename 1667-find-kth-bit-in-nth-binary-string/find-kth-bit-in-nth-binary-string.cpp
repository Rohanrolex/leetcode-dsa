class Solution {
public:
    // Invert bits of the string
    string reverses(string x) {
        for (auto &it : x) {
            if (it == '1')  // char comparison
                it = '0';
            else
                it = '1';
        }
        return x;
    }

    // Build the binary string S_n
    string buildin(int n) {
        if (n == 1) return "0";
        string prev = buildin(n - 1);
        string rev = prev;
        reverse(rev.begin(), rev.end());
        return prev + "1" + reverses(rev);  
    }

    // Main function to find kth bit
    char findKthBit(int n, int k) {
        string s = buildin(n);
        return s[k - 1];  // convert to 0-based index
    }
};