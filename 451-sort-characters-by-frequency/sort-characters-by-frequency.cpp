class Solution {
public:
    string frequencySort(string s) {
          string p = "";
          unordered_map<char , int>mpp;

          for(auto it : s){
            mpp[it]++;
          }

vector<pair<char,int>>freq(mpp.begin() , mpp.end());
          sort(freq.begin(), freq.end(), 
                  [](const auto& a, const auto& b) {
                      return a.second > b.second;
                  });

                  for(auto it : freq){
                      p+= string(it.second , it.first);
                      
                  }
                  return p;
                  
                  
    }
};