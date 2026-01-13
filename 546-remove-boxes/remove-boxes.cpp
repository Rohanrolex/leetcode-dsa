class Solution {
public:
    int dp[101][101][101];

    int get(vector<int>& boxes, int left, int right, int streak) {
        if (left > right) return 0;

        if (dp[left][right][streak] != -1)
            return dp[left][right][streak];

        // Option 1: remove current box immediately
        int ans = (streak + 1) * (streak + 1)
                + get(boxes, left + 1, right, 0);

        // Option 2: try to merge with same colored box later
        for (int i = left + 1; i <= right; i++) {
            if (boxes[left] == boxes[i]) {
                ans = max(ans,
                    get(boxes, left + 1, i - 1, 0)
                  + get(boxes, i, right, streak + 1)
                );
            }
        }

        return dp[left][right][streak] = ans;
    }

    int removeBoxes(vector<int>& boxes) {
        memset(dp, -1, sizeof(dp));
        return get(boxes, 0, boxes.size() - 1, 0);
    }
};
