class Solution {
public:

//for finding the parent 
int find(vector<int>& disjoint , int x){
    if(disjoint[x] == -1){  
        return x;
    }

    return disjoint[x] = find(disjoint , disjoint[x]); //path compression 
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int>disjoint(n+1 , -1); //create a disjoint set and mark it as -1
          
          for(auto edge : edges){
            int parent_x = find(disjoint , edge[0]); //absolutre parent of first
            int parent_y = find(disjoint , edge[1]); //absolute parent of second



            if(parent_x == parent_y)  return edge;  //because this is the redundent edge 

            else disjoint[parent_x] = parent_y; //make union
          }

          return {0,0};
    }
};