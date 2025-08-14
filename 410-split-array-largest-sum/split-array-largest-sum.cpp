class Solution {
public:

int nodays(vector<int>& weights , int cap){
      int day =1;
      int  load =0;

      for(int i =0 ;i<weights.size() ;i++){
           if(weights[i] + load > cap){
                day += 1;
                load = weights[i];
           }
           else{
               load += weights[i];
           }
      }
      return day;
}
    int splitArray(vector<int>& weights, int k) {
         int low = *max_element(weights.begin() , weights.end());
         int high = accumulate(weights.begin() , weights.end(),0);

         while(low<=high){
             int mid = (low+high)/2;

             int noofdays = nodays(weights , mid);

             if(noofdays <= k){
                 high = mid-1; //we can find more less capacity
             }
             else{
                  low = mid+1; //no find more low
             }
         } 
         return low;  
    }
};