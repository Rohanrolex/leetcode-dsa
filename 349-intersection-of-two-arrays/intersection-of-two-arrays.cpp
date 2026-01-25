class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        vector<int>s;
        for(auto it : nums2){
            st.insert(it);
        }

        set<int>ans;
        for(int i =0 ;i<nums1.size();i++){
             if(st.find(nums1[i]) != st.end()){
                ans.insert(nums1[i]);
             }
        }
for(auto it : ans){
   s.push_back(it);
}
        

return s;
    }
};