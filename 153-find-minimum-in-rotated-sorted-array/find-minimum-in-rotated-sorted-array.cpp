class Solution {
public:
    int findMin(vector<int>& nums) {
     int n =nums.size();
     int low = 0;
     int high =n-1;
     int mini = INT_MAX;
     while(low<=high){
        int mid =(low+high)/2;
        if(nums[low]<=nums[mid]){ //means if left side is sorted 
          mini =min(mini ,nums[low]);
          low  = mid+1; //eleminate left side 
        }
        else{
             mini =min(mini, nums[mid]); //if right side is sorted then go through this .
          high =mid-1; //right portion is eleminated
        }
       

     }
     return mini;

    }   
};