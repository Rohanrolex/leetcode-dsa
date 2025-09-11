class Solution {
public:
    string sortVowels(string s) {
       
        int n =s.size();
     string p ="";

     for(int i =0 ;i<n ;i++){
         if (s[i] == 'a' ||s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
          p.push_back(s[i]); //push only vowel 

        } 
     }

     sort(p.begin(), p.end());


     int x =0;//point into the p string
     while(x<p.size()){



        for(int i =0 ;i<n ;i++){
         if (s[i] == 'a' ||s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
             s[i] = p[x];
             x++; //increase the value of x pointer

        } 
     }


     }

     return s;

    }
};