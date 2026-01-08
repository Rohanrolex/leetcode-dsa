class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1;

        int prev1 = 1, prev2 = 1; // Base cases: ways to climb 0 or 1 steps
        for (int i = 2; i <= n; ++i) {
            int current = prev1 + prev2; // Sum of ways to climb (i-1) and (i-2) steps
            prev2 = prev1;  // Update previous values
            prev1 = current;
        }
        return prev1;
    }
};