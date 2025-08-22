class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {

           int n = grid.size();
           int m = grid[0].size();
int top = n;
int left = m;
int buttom = 0;
int right = 0;

           for(int i =0; i<n ;i++){
            for(int j =0 ;j<m ;j++){
                 if(grid[i][j] == 1){
                       top = min(top ,i);
                       buttom = max(buttom ,i);
                       left = min(left , j);
                       right = max(right ,j);
                 }
            }
           } 
           return (buttom - top +1)* (right - left +1);   
    }
};