class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;

        int sum = accumulate(nums.begin(), nums.end(), 0);
        int p = 0;

        for (int j = 0; j < nums.size() - 1; j++) {   // ONLY FIX: loop end already correct
            p += nums[j];
            int c = abs(2 * p - sum);                // FIXED: correct absolute difference
            if (c % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};
