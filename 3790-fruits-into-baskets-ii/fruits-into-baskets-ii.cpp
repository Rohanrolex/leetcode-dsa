class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int m = baskets.size();
        vector<int> vis(m, -1);  // -1 means basket unused

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[j] == -1 && fruits[i] <= baskets[j]) {
                    vis[j] = 1; 
                    break; 
                }
            }
        }

        int usedBaskets = 0;
        for (int i = 0; i < m; i++) {
            if (vis[i] == 1) usedBaskets++;
        }

        return n - usedBaskets;  
    }
};
