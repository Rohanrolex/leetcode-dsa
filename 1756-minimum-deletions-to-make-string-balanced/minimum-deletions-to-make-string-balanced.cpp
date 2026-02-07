class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        int a = 0, b = 0;
        int res = n;

        // count total 'a'
        for (char c : s) {
            if (c == 'a') a++;
        }

        // try every split
        for (char c : s) {
            if (c == 'a') a--;          // remove from right
            res = min(res, a + b);      // deletions needed
            if (c == 'b') b++;          // add to left
        }
        return res;
    }
};
