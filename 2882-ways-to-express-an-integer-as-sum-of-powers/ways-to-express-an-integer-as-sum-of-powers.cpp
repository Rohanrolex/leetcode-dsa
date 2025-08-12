class Solution {
public:
  const int MOD = 1e9 + 7;
  vector<vector<int>>dp;

  int path(int n , int x, int num){
      

      if(n == 0) return 1; // find a path
      if(pow(num , x) > n) return 0; //not find any path 

      if(dp[n][num] != -1) return dp[n][num];

      int select = path( n - (int)pow(num ,x),  x, num+1)%MOD; //we select this path 
      int notselected = path(n , x , num+1)%MOD; //we are not selecting this  path


      return dp[n][num] =  (select + notselected) % MOD;
        }


   

   

    int numberOfWays(int n, int x) {
         dp.assign(n+1 , vector<int>(n+1 , -1));
         return path(n ,x,1);  
    }
};