class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
         unordered_map<int,int>mpp;
         //freq count
         for(auto it : nums){
            mpp[it]++;
         }

//find maxfreq
         int maxfreq = 0;
         for(auto it : mpp){
            maxfreq = max(maxfreq , it.second);
         }


         int count =0;
         for(auto p : mpp){
            if(maxfreq == p.second){
                count+=p.second;
            }
         }


return count;

    }
};