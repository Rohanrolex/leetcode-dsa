class Solution {
public:
    bool rotateString(string s, string g) {
        if(s.size() != g.size()) return false;

         string dublled = s+s;

         return dublled.find(g) != string::npos;
    }
};