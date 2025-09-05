class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        
          for(int i =1;i<=60;i++){
             long long diff = (long long) num1 -(long long )i* num2;

             if(diff >= 0 && __builtin_popcountll(diff)<=i && i<=diff){
                return i;
             }
          }
        return -1;
    }
};