class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
    int totalzero =0;
    int left =0;
int ans =0;

    for(int right =0 ;right<n ;right++){
         //first count the zero 
         if(nums[right] == 0)  totalzero++;


         while(totalzero >1){
            if(nums[left] == 0) totalzero--;
            left++; //increase the left pointer 

         }

      ans = max(ans, right-left); //print the lenght of the sunbarray
    }
return ans;
    }
};