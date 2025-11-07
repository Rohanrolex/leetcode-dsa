//0 =  not colored
//1 = blue
//-1 =red

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n =graph.size();
        vector<int> color(n,0);//initialize all the nodes with color 0
        for(int i =0 ;i<n ;i++){
            if(color[i]==0 && !valid(graph , color ,1 ,i)) return false;
        }
        return true;
        
    }
    bool valid(vector<vector<int>>& graph, vector<int>&color , int a , int node){
        if(color[node] !=  0)
        return color[node]==a;//return 1;
        //if not colord
        color[node] =a;
        //check for adjuscent node
        for(int p : graph[node]){
            if(!valid(graph , color ,-a ,p)) return false;
        }
        return true;
    }

};