class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         set<int>st;

for(auto it : arr){
    st.insert(it);
}

         int i=1;
         int count=0;
         while(true){
            if(st.find(i) == st.end()){
                count++;
                if(count == k) return i;
            }
            i++;
         }
        
    }
};