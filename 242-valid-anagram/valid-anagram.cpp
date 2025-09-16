class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int>mpp;
        unordered_map<char,int>mpp2;
        for(auto it : s){
            mpp[it]++;
        }

        for(auto it : t){
            mpp2[it]++;
        }

        
return mpp == mpp2;
    }
};