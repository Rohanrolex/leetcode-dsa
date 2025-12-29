class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0;
        int n = nums.size();
        int left = 0, right = 0;

        while (right < n - 1) {
            int num = 0;
            for (int i = left; i <= right; i++) {
                num = max(num, i + nums[i]);
            }
            left = right + 1;
            right = num;
            jump++;
        }
        return jump;
    }
};