class Solution {
public:

void  dfs(vector<vector<int>>& result, vector<int>& path , int node, vector<vector<int>>& graph){
   
   path.push_back(node); //make a path 

   if(node == graph.size()-1) result.push_back(path); //found one path 

   for(auto neighbour : graph[node]){
       dfs(result , path , neighbour , graph); //  neighbour node ca;l  
   }
   path.pop_back();

}
   
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<vector<int>>result;
       vector<int>path;
       dfs(result , path , 0 , graph);   
       return result;
    }
};