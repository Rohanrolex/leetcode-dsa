class Solution {
public:
    int countPartitions(vector<int>& nums) {
         int totalsum = accumulate(nums.begin() , nums.end(),0);
          

        // int left=0;
        int patition =0;


        for(int i =0 ; i<nums.size()-1 ;i++){
              int left = nums[i];
              int right = totalsum - left;

              if(abs(left - right) % 2 ==0) patition++;
        }

        return patition;
    }
};