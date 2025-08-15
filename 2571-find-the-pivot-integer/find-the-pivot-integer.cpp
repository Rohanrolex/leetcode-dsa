class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return 1;
          
    vector<int>p(n);
    vector<int>q(n);


    p[0] = 1;
     for(int i =1 ;i<n;i++){
         p[i] = p[i-1] + (i+1);
     }


     q[n-1] = n;

     for(int j = n-2 ; j>=0 ;j--){
          q[j] = q[j+1] + (j+1);
     }


    //now find the pivot 

    for(int i =0 ;i<n ;i++){
          if(p[i] == q[i]) return i+1;
    }
      return -1;
    }
};