class Solution {
public:
    int solve(int n, int index) {
        if (n == 0) return 1;
        if (index == 5) return 0;

        // choose current vowel
        int take = solve(n - 1, index);

        // move to next vowel
        int skip = solve(n, index + 1);

        return take + skip;
    }

    int countVowelStrings(int n) {
        return solve(n, 0);
    }
};
