class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
          int m = mat[0].size();
          int n = mat.size();
  vector<int>ans; 
  ans.reserve(n*m);

int i =0 ;
int j =0;


bool up  =true;

while(ans.size() < n*m){
    ans.push_back(mat[i][j]);

    if(up){
         if(j == m-1){
             i++;
             up = false;
         }
         else if(i == 0){
            j++;
            up =false;
         }else{
             i--;
             j++;
         }
    }else{
        if(i == n-1){
            j++;
            up =true;
        }
        else if(j == 0){
            i++;
            up =true;

        }
        else{
             i++;
             j--;
        }
    }
}

          return ans;
    }
};