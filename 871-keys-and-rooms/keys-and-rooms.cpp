class Solution {
public:

void  dfs(vector<vector<int>>& rooms , int &count , int curr , vector<int>&vis){
    for(int i =0 ;i<rooms[curr].size();i++){
        int j = rooms[curr][i];

        if(!vis[j]){ //if not visited
            vis[j] = true;
            count++;
            dfs(rooms , count , j , vis);
        }
    }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
         vector<int>vis(n ,false);
         vis[0] = true;
         int count = 1;
         dfs(rooms , count , 0 , vis);
         return count == n;
    }
}; 