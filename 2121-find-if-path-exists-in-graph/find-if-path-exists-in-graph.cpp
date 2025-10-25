class Solution {
public:

bool dfs( vector<vector<int>>& adj , vector<int> & vis , int curr , int end){
     if(curr == end) return true;

     if(vis[curr]) return false; //already visited

     vis[curr] = 1; // mark as visited

      for(int i =0 ;i<adj[curr].size() ;i++){
         if(dfs(adj , vis ,adj[curr][i], end))return true;
      }
      return false;
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
     
     vector<vector<int>>adj(n);

     for(int i =0 ;i<edges.size() ;i++){
         adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);

     }

     vector<int>vis(n ,0);

     return dfs(adj , vis , source , destination);





    }
};