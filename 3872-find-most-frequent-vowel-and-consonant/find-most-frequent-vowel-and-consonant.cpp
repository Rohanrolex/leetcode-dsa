class Solution {
public:
    int maxFreqSum(string s) {
         set<char>st = {'a','e','i','o','u'};
         unordered_map<char,int>mpp;


//count the freq
         for(auto it : s){
            mpp[it]++;
         }

         int maxvowel =0;
         int maxconsonant = 0;

         for(auto it : mpp){
             
             if(st.count(it.first)){
                 maxvowel = max(maxvowel , it.second);
             }else{
                maxconsonant = max(maxconsonant , it.second);
             }
         }

         return maxvowel+maxconsonant;
    }
};