#include <bits/stdc++.h>
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
       int n  = dimensions.size();

     int  ans = 0;
     int DiagonalLen =-1;

       for(int i =0 ;i<n ;i++){
           
             
             int dialength =  dimensions[i][0]* dimensions[i][0] + dimensions[i][1]*dimensions[i][1];

             int area = dimensions[i][0]* dimensions[i][1];


             if(dialength > DiagonalLen){
                DiagonalLen = dialength;
                ans = area;
             } 

             else if(dialength == DiagonalLen){
                  ans = max(ans,area);
             }
        

       }

return ans;
             

    }
};