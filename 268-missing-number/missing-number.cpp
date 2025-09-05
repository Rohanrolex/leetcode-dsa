class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
       int sum = n*(n+1)/2; //first nth natural number sum

       int sum1 = accumulate(nums.begin() , nums.end(),0);

       int missingNumber = sum - sum1;
       return missingNumber;
    }
};