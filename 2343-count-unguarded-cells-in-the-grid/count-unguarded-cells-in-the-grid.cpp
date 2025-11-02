class Solution {
public:
vector<int>dir = {-1,0,1,0,-1};

void dfs(int x , int y , int direction , vector<vector<int>>&mat){
     if(x<0 || x>=mat.size() || y<0 || y>=mat[0].size() || mat[x][y]== 2 || mat[x][y]==3) return; //base condition
     mat[x][y] = 1; //mark as guarded

     if(direction == 0) dfs(x-1 , y , direction , mat); //up
    else if(direction == 1) dfs(x , y+1 , direction , mat); //right

    else  if(direction == 2) dfs(x+1 , y , direction , mat); //down

    else  if(direction == 3) dfs(x , y-1 , direction , mat); //left

}
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
          
          vector<vector<int>>mat(m , vector<int>(n,0)); //m*n matrix

          for(auto &guard : guards){
             mat[guard[0]][guard[1]] = 2;  //mark all guard as 2
          }

          for(auto &wall : walls){
            mat[wall[0]][wall[1]] = 3; //mark wall as 3
          }


          for(auto &guard : guards){
             for(int i =0 ;i<4 ;i++){
                int x = guard[0]+dir[i];
                int y = guard[1]+dir[i+1];
                dfs(x ,y , i , mat);
             }
          }
          //count the no of cell which is not guarded

          int ungurded = 0;

          for(int i =0 ;i<m ;i++){
            for(int j =0 ;j<n;j++){
                if(mat[i][j] == 0){
                    ungurded += 1;
                }
            }
          }
          return ungurded;
    }
};