class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
         unordered_map<int,bool>mpp;
   
   for(auto it: nums){
     mpp[it] = true;
   }


   for(int i =0 ;i<=n;i++){
     if(mpp.find(i) == mpp.end()){
        return i; //not found the ele
     }
   }
return -1;
    }
};