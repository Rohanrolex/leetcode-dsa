class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
          int m = grid.size();
          int n = grid[0].size();

//calculate the total sum 
          long long totalsum =0; 
          for(int i =0 ;i<m ;i++){
            for(int j =0 ;j<n ;j++){
                totalsum += grid[i][j];
            }
          }

          //for rowsum

          long long rowsum = 0;
          for(int i =0 ;i<m ;i++){
            for(int j =0 ;j<n ;j++){
                rowsum += grid[i][j];
            }

            if(rowsum * 2 == totalsum) return true;
          }


          // for column sum

          long long columnsum = 0;
          for(int i =0 ;i<n ;i++){
            for(int j =0 ;j<m ;j++){
                columnsum += grid[j][i];
            }

            if(columnsum * 2 == totalsum) return true;
          }

          return false;

    }
};