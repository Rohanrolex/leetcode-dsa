class Solution {
public:
    bool stoneGame(vector<int>& piles) {
    int n = piles.size();
    
    sort(piles.begin() , piles.end(),greater<int>()); //sort in decending order
    int Alice = 0;
    int bob  =0;

    for(int i =0 ;i<n;i++){
           if(i%2 == 0){
              Alice+=piles[i];
           }
           if(i%2 != 0) bob+=piles[i];
    }

if(Alice > bob) return true; //alice win the game
return false;

    }
};