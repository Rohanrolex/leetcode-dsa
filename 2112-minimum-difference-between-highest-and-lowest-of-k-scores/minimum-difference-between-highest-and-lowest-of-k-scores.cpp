class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
         int n = nums.size();
         int ans =INT_MAX;
         if(k == 1 && n ==1) return 0;
          sort(nums.begin(),nums.end());
          
          for(int i =0 ;i<=n-k;i++){
             int mini = INT_MAX;
            int maxi = INT_MIN;
             for(int j =i ;j<i+k;j++){
                maxi = max(maxi , nums[j]);
                mini = min(mini , nums[j]);
             }
             ans = min(ans , maxi-mini);
          }
         return ans;
          
    }
};