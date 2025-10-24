class Solution {
public:
    bool isBeautiful(int num) {
        string s = to_string(num);
        vector<int> count(10, 0);

        for (char c : s)
            count[c - '0']++;

        for (int i = 0; i < 10; i++) {
            if (count[i] != 0 && count[i] != i)
                return false;
        }
        return true;
    }

    int nextBeautifulNumber(int n) {
        int num = n + 1;
        while (true) {
            if (isBeautiful(num))
                return num;
            num++;
        }
    }
};
