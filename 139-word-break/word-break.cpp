class Solution {
public:
 int dp[301];

 int ans(int i , string &s , unordered_set<string> &c){
     if(i == s.size()) return 1; // all word present in the wordict
     if(dp[i] != -1)return dp[i];
 string temp; 
     for(int j =i ;j<s.size();j++){
       temp += s[j];

       if(c.find(temp) != c.end()){
          if(ans(j+1 , s, c)) return 1; //found the word
       }   
     }
    return  dp[i] = 0;
 }
  
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>p;
        memset(dp , -1 , sizeof dp);
        for(auto it : wordDict){
             p.insert(it);
        }
        return ans(0, s , p);

             
             
    }
};