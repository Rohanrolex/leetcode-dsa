class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
         vector<string>ans;
        ans.push_back(words[0]);
        int lastgroup = groups[0];

        for(int i = 1 ;i<words.size();i++){
             if(groups[i] != lastgroup){
                 ans.push_back(words[i]);
                 lastgroup = groups[i];
                 
             }
        }

         return ans;
    }
};