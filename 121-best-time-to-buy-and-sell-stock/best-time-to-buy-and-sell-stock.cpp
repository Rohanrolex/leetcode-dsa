class Solution {
public:
    int maxProfit(vector<int>& nums) {
         int n = nums.size();

         int maxprofit =0;
         int minbuy = INT_MAX;

         for(int x : nums){
            minbuy = min(minbuy , x);
            maxprofit = max(maxprofit , x - minbuy);
         }
         return maxprofit;
    }
};