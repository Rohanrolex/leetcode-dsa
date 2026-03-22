class Solution {
public:

void rotate(vector<vector<int>>& mat){
    int n = mat.size();
    //make transpose matrix
    for(int i =  0 ;i<n;i++){
        for(int j =0 ;j<i ;j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
//now  swap two row

int start =0;
int end =n-1;
while(start <= end){
    for(int row =0 ; row<mat.size();row++){
        swap(mat[row][start], mat[row][end]);
    }
    start++;
    end--;
}

}


bool check(vector<vector<int>>& mat, vector<vector<int>>& target){
    int n = mat.size();
    for(int i =0 ; i<n ; i++){
        for(int j =0 ; j<n; j++){
            if(mat[i][j] !=  target[i][j]) return false;

        }
    }
    return true;
}


    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
         for(int i =0 ;i<4 ;i++){
            if(check(mat,target)){
                return true;
            }
            rotate(mat);
         }
         return false;
    }
};