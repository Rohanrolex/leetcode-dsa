class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();
        unordered_set<char>p(allowed.begin() , allowed.end());

  int count  = words.size();
        for(auto &it :words){
              for(auto c : it){
                  if(p.find(c) == p.end()){
                    count--;
                    break;
                  }
              }
        }
return count;
        
    }
};