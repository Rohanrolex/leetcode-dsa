class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxsum =0;
        for(int i =0 ;i<nums.size()/2;i++){
            maxsum = max(maxsum , nums[i]+ nums[nums.size()-i-1]);
        }
        return maxsum;
    }
};