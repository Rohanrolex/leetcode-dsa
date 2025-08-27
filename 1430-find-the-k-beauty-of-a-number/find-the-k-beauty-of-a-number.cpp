class Solution {
public:
    int divisorSubstrings(int num, int k) {

           string p = to_string(num);  
           int n = p.size();
           int count=0;
           for(int i =0 ;i<=n-k ;i++){
                string  temp = p.substr(i,k);
                int c = stoi(temp);


                if(c!=0 && num%c == 0) count++;
           }
           return count;
    }
};