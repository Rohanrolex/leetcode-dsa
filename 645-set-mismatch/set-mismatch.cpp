class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>p(2);
        int n = nums.size();
        set<int>st(nums.begin(),nums.end());

        for(int i =0 ;i<n ;i++){
            if(nums[i] == nums[i+1]){
                p[0] = nums[i];
               
                break;
            }
        }
        for(int i =1 ;i<=n ;i++){
            if(st.find(i) == st.end()){
                p[1] = i;
            }
        }


        return p;
    }
};