class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
         int n = nums.size();
         int result = nums[0];
         for(int i =0;i<n;i++){
             int pro =1;
             for(int j =i; j<n ;j++){
                pro*=nums[j];
                result = max(result , pro);
             }
         }
         return result;
    }
};