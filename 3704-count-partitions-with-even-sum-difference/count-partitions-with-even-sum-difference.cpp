class Solution {
public:
    int countPartitions(vector<int>& nums) {
         int totalsum = accumulate(nums.begin() , nums.end() , 0);
         int  sum = 0;
         int count =0;

         for(int i =0 ;i<nums.size()-1 ;i++){
             sum += nums[i];
             int remaining = totalsum - sum;

             if(abs(sum - remaining) %2 == 0) count++;
         }

         return count;
    }
};