class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       int n = bank.size();
       int m = bank[0].size(); //size of the first rowp
       int laser = 0;
       int prev =0;
       

        for(int i =0 ;i<n;i++){
            int count =0;
              for(int j = 0 ; j<m ;j++){
                 if(bank[i][j] == '1'){ //if 1 only work for this row 0 is skip every time 
                count+=1;
               
                 }
              }
     if(count  == 0) continue; //skip because there is no 1 in this row 

              
              laser +=  prev * count;
              prev = count;

        }  
        return laser;
    }
};