class Solution {
public:
    long long time(vector<int>& piles, int t) {
        long long totalhour = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalhour += ( (long long)piles[i] + t - 1 ) / t;
        }
        return totalhour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int low = 1;             // avoid division by zero
        int high = maxi;

        while (low <= high) {
            int mid = low + (high - low) / 2; 
            long long totaltime = time(piles, mid);

            if (totaltime <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
