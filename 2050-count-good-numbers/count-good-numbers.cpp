#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long power(long long base, long long exp) {
    long long result = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

class Solution {
public:
    int countGoodNumbers(long long n) {
        long long evenCount = (n + 1) / 2; 
        long long oddCount = n / 2;        
        long long res = (power(5, evenCount) * power(4, oddCount)) % MOD;
        return (int)res;
    }
};
