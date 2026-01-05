class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
       int  minele = INT_MAX;
      long long  sum =0;
      int neg =0;
      for(int i = 0; i<n ;i++){
        for(int j =0 ;j<m ;j++){
           int val = matrix[i][j];
           if(val < 0){
             neg++;
           }
           
            sum+= abs(val);
            minele = min(minele , abs(val));

           

           }
          

        }

        if(neg %2 == 1){
            sum -= 2* minele;
        }
 return sum;
      }
       
    
};