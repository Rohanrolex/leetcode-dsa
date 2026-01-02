class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int size = n/2;

    unordered_map<int,int>mpp;
    for(auto &it : nums){
        mpp[it]++; //calculate freq
    } 


    for(auto it : mpp){
        if(it.second == size){
            return it.first;
        }
        
    }
        return 0;
    }
};