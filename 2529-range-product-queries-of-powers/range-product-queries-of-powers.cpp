#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
   const int MOD = 1e9 + 7;


   vector<int>power;



   for(int i =0 ;i<31;i++){
      if(n & (1<<i)){
         power.push_back(1<<i);
      }
   }


   vector<int>ans;

      for(auto &p : queries){

         long long  product = 1;

         for(int i = p[0] ;i<=p[1];i++){
            product = (product * power[i])%MOD;


         }

         ans.push_back(product);
      }



return ans;
    }
};