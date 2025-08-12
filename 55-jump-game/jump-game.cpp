class Solution {
public:
    bool canJump(vector<int>& nums) {
     int n = nums.size();

       int maxind = 0;

       for(int i =0 ;i<n ;i++){
            if(maxind < i) return false;
           
           maxind = max(maxind , nums[i]+i);
       }
       return true;
    }
};