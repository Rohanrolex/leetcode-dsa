class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int>p = edges[0];
        vector<int>q = edges[1];

        return ((p[0] == q[0]) || (p[0]==q[1])) ? p[0] : p[1];
    }
};