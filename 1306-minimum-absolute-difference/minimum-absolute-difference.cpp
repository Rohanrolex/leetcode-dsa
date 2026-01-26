class Solution {
public:

int countminsum(vector<int>& arr, int minsum) {
        for (int i = 0; i < arr.size() - 1; i++) {
            int x = abs(arr[i] - arr[i + 1]);
            if (x < minsum) {
                minsum = x;
            }
        }
        return minsum;
    }


void pairsum(vector<int>& arr , int minsum ,  vector<vector<int>>& ans){
       for(int i =0 ;i<arr.size()-1 ;i++){
          if(abs(arr[i] - arr[i+1]) == minsum){
            ans.push_back({arr[i], arr[i+1]});
          }
       }
}
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
          int n = arr.size();
          sort(arr.begin() , arr.end());
          int minsum = abs(arr[0]-arr[1]);
           minsum =  countminsum(arr, minsum);
          vector<vector<int>> ans;
            pairsum(arr, minsum , ans);

          
return ans;

    }
};