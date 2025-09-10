class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int n = nums.size();
         int low =0;
         int high = n-1;
        //if found
         while(low<=high){
             int mid = low+(high-low)/2;
           
           if(nums[mid] == target) return mid;
           if(nums[mid] < target) low = mid+1;
           else high = mid-1;
         }
         //if not found
         return low;
    }
};