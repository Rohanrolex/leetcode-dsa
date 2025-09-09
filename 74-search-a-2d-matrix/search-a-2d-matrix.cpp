class Solution {
public:
    bool findvalue(vector<int>& ans, int t) {
        int n = ans.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (ans[mid] == t) return true;
            else if (ans[mid] < t) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> ans; 
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans.push_back(matrix[i][j]);
            }
        }

        return findvalue(ans, target);
    }
};
