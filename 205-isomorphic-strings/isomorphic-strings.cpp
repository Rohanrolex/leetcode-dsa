class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if(s.size()!=t.size()) return false;

       vector<int>smap(256,-1);
       vector<int>tmap(256,-1);

       for(int i =0 ;i<s.size();i++){
          char c1 = s[i];
          char c2 = t[i];

          if(smap[c1] == -1) smap[c1] = c2; //c1 point to c2
          else if(smap[c1] != c2) return false;


          if(tmap[c2] == -1) tmap[c2] = c1;
          else if(tmap[c2] != c1) return false;
       }
       return true;
    }
};