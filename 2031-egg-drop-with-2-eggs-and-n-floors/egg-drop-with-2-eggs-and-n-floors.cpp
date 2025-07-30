class Solution {
public:
    int twoEggDrop(int n) {
          int totalmove = 0;
           while((totalmove*(totalmove+1))/2  <n){
              totalmove++;
           }
           return totalmove;
    }
};