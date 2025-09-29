class Solution {
public:
    string toLowerCase(string s) {
          string p = "";
          int n = s.size();
          for(int i =0 ;i<n;i++){
            p.push_back(tolower(s[i]));
          }
          return p;
    }
};