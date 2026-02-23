class Solution {
public:
    bool hasAllCodes(string s, int k) {
         if(s.size() < k) return false; // it means the given string is less than the k
        unordered_set<string>st;
         for(int i =0 ;i<=s.size()-k;i++){
          st.insert(s.substr(i,k));
         }
         if(st.size() == pow(2,k)) return true;
         return false;   
    }
};