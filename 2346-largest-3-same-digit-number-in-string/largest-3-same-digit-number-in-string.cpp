class Solution {
public:
    string largestGoodInteger(string nums) {
          int n= nums.size();
          string ans ="";

            for(int i =0 ;i<n-2 ;i++){
                string p ="";
                 if(nums[i] == nums[i+1] && nums[i] == nums[i+2]){

                         p.push_back(nums[i]);
                          p.push_back(nums[i]);
                           p.push_back(nums[i]);

                 }
                 ans = max(ans , p);
            }
           
       
          return ans;
    }
};