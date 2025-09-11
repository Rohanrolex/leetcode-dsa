class Solution {
public:

bool possible(vector<int>arr , int day , int m , int k){
       int count =0;
      int totalcount =0;
      for(int i=0 ;i<arr.size();i++){
          if(arr[i] <= day){
             count++;
          }else{
          totalcount += (count/k);
          count =0;
          }
      }
      totalcount += (count/k);

      if(totalcount >= m) return true;
return false;
      

}
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()< (long long) m*k) return -1; //not possible 
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        int mini = *min_element(bloomDay.begin(), bloomDay.end());

        int low = mini;
        int high =maxi;

        while(low<=high){
            int mid = low+ (high-low)/2;
            if(possible(bloomDay, mid , m ,k)){
                 high = mid-1;
            }else{
              low= mid+1;  
            }
        }
        return low;
    }
};