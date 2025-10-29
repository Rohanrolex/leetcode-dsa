class Solution {
public:
    int smallestNumber(int n) { 
        if(n == 1) return 1;
         int c = 2;  
         while(n >= c){
           c *= 2;
         }
         return c-1;
    }
};