class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n =nums.size();
        int ans;
        for(int i =0;i<n ;i++){
            bool left = (i==0) || (nums[i]>nums[i-1]);
              bool right = (i== n-1) || (nums[i]>nums[i+1]);

              if(left && right){
                 ans = i;
                break;
              }
                
            
        }
        return ans;
    }
};