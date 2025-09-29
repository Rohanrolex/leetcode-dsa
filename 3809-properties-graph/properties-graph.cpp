class Solution {
public:
    int cnt[155][155]; // Stores presence of numbers in each row
    int par[155]; // Union-Find parent array

    // Find function with path compression
    int fin(int x) {
        if (par[x] == x) return x;
        return par[x] = fin(par[x]);
    }
    
    int numberOfComponents(vector<vector<int>>& properties, int k) {
        int n = properties.size();

        // Initialize Union-Find and presence array
        for (int i = 0; i < n; i++) {
            par[i] = i; // Initially, each node is its own parent
            memset(cnt[i], 0, sizeof(cnt[i])); // Reset presence array
            
            // Mark numbers present in the current row
            for (int num : properties[i]) cnt[i][num] = 1;

            // Compare with previous rows to check intersection count
            for (int j = 0; j < i; j++) {
                int commonCt = 0;
                // Count how many numbers appear in both rows
                for (int num = 1; num <= 100; num++) {
                    if (cnt[i][num] && cnt[j][num]) commonCt++;
                }

                // Merge components if common elements >= k
                if (commonCt >= k) par[fin(j)] = fin(i);
            }
        }

        // Count the number of connected components
        int compCt = 0;
        for (int i = 0; i < n; i++) {
            if (fin(i) == i) compCt++;
        }return compCt;
    }
};