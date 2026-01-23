class Solution {
public:
vector<vector<int>>ans;

void calculate(vector<int>& candidates , int target , int ind , vector<int>&v , int currsum){
    if(ind == candidates.size() || currsum > target) return;
    if(currsum == target){
        ans.push_back(v);
        return;
    }

    //skip
    calculate(candidates , target , ind+1 , v , currsum);
    //not skip
    v.push_back(candidates[ind]);
    calculate(candidates , target , ind , v, currsum+candidates[ind]);
    v.pop_back();
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<int>v;
        calculate(candidates , target, 0 ,v,0);
        return ans;
        
    }
};