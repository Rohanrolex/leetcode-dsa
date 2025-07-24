class Solution {
public:
    int countVowelStrings(int n) {
        vector<vector<int>> dp(n + 1, vector<int>(6, 0));

        // Base case: strings of length 1
        for (int j = 1; j <= 5; j++) {
            dp[1][j] = j;
        }

        // Fill the table
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= 5; j++) {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }

        return dp[n][5]; // Final answer
    }
};
