class Solution {
public:
    int triangularSum(vector<int>& nums) {
          int n = nums.size();

          while(n>1){
            vector<int>ans;

            for(int i =0 ;i<n-1;i++){
                 ans.push_back((nums[i]+nums[i+1])%10);
                
            }
             n--; //size decreasing by one every step
                 nums = ans;
          }
          return nums[0];
    }
};