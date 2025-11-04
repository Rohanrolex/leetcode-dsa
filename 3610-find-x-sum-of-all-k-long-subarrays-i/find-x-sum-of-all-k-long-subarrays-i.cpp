class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i + k <= n; i++) {
            unordered_map<int, int> freq;

            // Count frequency in current subarray
            for (int j = i; j < i + k; j++) {
                freq[nums[j]]++;
            }

            // Convert map to vector for sorting
            vector<pair<int, int>> vec(freq.begin(), freq.end());

            // Sort by frequency (desc), then value (desc)
            sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
                if (a.second == b.second)
                    return a.first > b.first;
                return a.second > b.second;
            });

            int sum = 0;
            for (int t = 0; t < vec.size() && t < x; t++) {
                sum += vec[t].first * vec[t].second;
            }

            ans.push_back(sum);
        }

        return ans;
    }
};
