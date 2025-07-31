class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
         
         int n = nums.size();

         for(int i =0 ;i<k ;i++){
             int minindex = 0;

             for(int j =1 ;j<n ;j++){
                if(nums[minindex] > nums[j]){
                    minindex = j;
                }
             }

             nums[minindex]  *= multiplier;
         }
        
        return nums;  
    }
};