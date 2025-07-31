class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int n = board.size(); 
        int m = board[0].size();
  if(n == 0)return 0;
  if(m == 0) return 0;

  int left , top; //checking two sides
int total =0;
  for(int i=0;i<n ;i++){
    top = i-1;
    for(int j=0; j<m ;j++){
    left = j-1;

    if(board[i][j] == 'X' && (top < 0 || board[top][j] == '.') && (left<0 || board[i][left] == '.')){
         total++;
    }

    }
  }

 return total;
    }
};