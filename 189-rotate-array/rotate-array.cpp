class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%= nums.size();
        reverse(nums.begin() , nums.end());  //reverse the whole array
        reverse(nums.begin() , nums.begin()+k); //reverse the first part 
        reverse(nums.begin()+k , nums.end());//reverse the second part
    }
};