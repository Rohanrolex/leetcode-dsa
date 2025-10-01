class Solution {
public:
    int numWaterBottles(int p, int q) {
        int ans = p;

        while(p >= q){
             

             int newbottle = p/q;
             int remaining = p % q;
             ans = ans+newbottle;
            p = newbottle + remaining;
        }
        return ans;
    }
};