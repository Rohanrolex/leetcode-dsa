class Solution {
public:
bool isprime(int num){
    int cnt=0;
    if(num <= 1) return false;

    for(int i =1; i<=num ;i++){
        if(num%i ==0){
          cnt++;
        }
    }

    if(cnt > 2) return false;
    else return true;
}
    int countPrimeSetBits(int left, int right) {
         int count =0;

         for(int i =left; i<=right ;i++){
             int x = __builtin_popcount(i);
            if(isprime(x)){
                count++;
            }
         }
         return count;
    }
};