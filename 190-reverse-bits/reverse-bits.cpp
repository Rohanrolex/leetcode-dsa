class Solution {
public:
    bool findnum(int x, uint32_t n) {
        if ((1 << x) & n) return true;  // Check if the x-th bit is 1
        return false;
    }

    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i < 32; i++) {  // Loop from 0 to 31
            if (findnum(i, n)) {       // Check if the i-th bit is set
                ans |= (1 << (31 - i));  // Set the corresponding reversed bit
            }
        }
        return ans;
    }
};