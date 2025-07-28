class Solution {
public:
  int maxOR = 0;
  int count =0;

  void ans(vector<int>& nums , int ind , int CurrentOR){
       if(ind == nums.size()){
           if(CurrentOR == maxOR) count++;
           return;
       }

       //selected ele
       ans(nums , ind+1 , CurrentOR | nums[ind]);

       //not selected
       ans(nums, ind+1 , CurrentOR);
  }
    int countMaxOrSubsets(vector<int>& nums) {
           

           for(int num : nums){
                maxOR |= num; //calculate total or of the array
              }

              ans(nums ,0,0);
              return count;
    }
};