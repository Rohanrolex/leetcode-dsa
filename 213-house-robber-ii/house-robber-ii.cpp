class Solution {
public:
   int rob2(vector<int>& nums) {
        int n = nums.size();
       if(n==0) return 0; //if no house is present is 0
       if(n==1) return nums[0]; // if just one house is present
       int prev1 =0;
       int prev2 =0;

       for(int i =0 ;i<n ;i++){
          int curr = max(prev1 , prev2+ nums[i]);
          prev2 = prev1;
          prev1 = curr;

       }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0]; // if there is just one element in the array then just  return it 

        vector<int> temp1,temp2;
        for(int i =0 ;i<n ;i++){
            if(i !=0) temp1.push_back(nums[i]);
            if(i != n-1) temp2.push_back(nums[i]);
        }

        return max(rob2(temp1) , rob2(temp2));
        
    }
};