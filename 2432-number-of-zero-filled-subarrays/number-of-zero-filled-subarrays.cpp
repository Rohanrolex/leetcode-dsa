class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
         int n = nums.size();
         long long   ans =0;
         long long  strick = 0;

         for(int i =0 ;i<n ;i++){
              if(nums[i] == 0){
                 strick++;
                 ans += strick;
              }else{
                 strick =0; //reset the strick
              }
         }
 return ans;
         
    }
};