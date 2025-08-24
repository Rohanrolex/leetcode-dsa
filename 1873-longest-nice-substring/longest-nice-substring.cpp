class Solution {
public:

bool good(string &sub){
     
     unordered_set<char>st(sub.begin() ,sub.end());

       for(char c : sub){

          if(!(st.count(tolower(c)) && st.count(toupper(c)))){
            return false;
          }
       }
  return true;
}
    string longestNiceSubstring(string s) {
        int n = s.size();
       
          string p ="";

          for(int i =0 ;i<n ;i++){
              for(int  j =i ;j<n ;j++){
                  string sub = s.substr(i , j-i+1);  //substring
                  if(good(sub) && sub.size()> p.size()){
                     p =sub;
                  }
              }
          }
        return p;
    }
};