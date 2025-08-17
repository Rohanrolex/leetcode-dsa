class Solution {
public:
    int maxFreqSum(string s) {

        set<char>st = {'a','e','i','o','u'};
       unordered_map<char,int>mpp;

          for(auto &it : s){
             mpp[it]++;      //count the freq;
              
          } 
         
         int maxvowel = 0;
         int maxconsonent = 0;
          for(auto &c : mpp){
             if(st.count(c.first)){
                   maxvowel = max(maxvowel , c.second);//count the maximum vowel
             } else{
                
                maxconsonent = max(maxconsonent , c.second); //count the maximum consonent 

             }

          }

          return  maxvowel+  maxconsonent; 
    }
};