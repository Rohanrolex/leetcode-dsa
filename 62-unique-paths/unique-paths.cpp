class Solution {
public:

int possibleway(int i , int j , vector<vector<int>>&dp){
    int count =0;
       if(i==0 && j==0) return 1;
       if(dp[i][j] != -1) return dp[i][j]; //if it is already  solve no do anything just return the solve value

       //move up
    if(i>0){
      count+= possibleway(i-1 , j , dp);
    }  
    
    //move left
    if(j>0){
       count+=possibleway(i , j-1 , dp);
    }  
    

    return dp[i][j] = count;

}


    int uniquePaths(int m, int n) {
    vector<vector<int>>dp(m, vector<int>(n,-1));  // first all the value is -1
       return possibleway(m-1 , n-1 , dp);
    }
};