class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;

//for frequency
        for(int it: nums){
            mpp[it]++;
        }

        for(auto it: mpp){
            if(it.second == 1) return it.first;
        }
        return -1;
    }
};