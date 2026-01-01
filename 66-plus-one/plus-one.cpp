class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
       
       for(int i = n-1 ; i>= 0; i--){
        //if the last digit is smaller than 9 just increment 1
         if(digits[i] < 9){
            digits[i]++;
            return digits;
         }
         //if digit is 9 then 9 onvers to 0
         digits[i] = 0;
       }
       digits.insert(digits.begin(),1); //also add 1  in the begin
       return digits;
       
        }
};