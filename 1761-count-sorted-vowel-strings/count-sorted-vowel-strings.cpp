class Solution {
public:
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    int dfs(int n, int start) {
        if (n == 0) return 1;

        int count = 0;
        for (int i = start; i < vowels.size(); ++i) {
            count += dfs(n - 1, i);  // pick vowel[i] and recurse
        }
        return count;
    }

    int countVowelStrings(int n) {
        return dfs(n, 0);  // start from first vowel
    }
};
