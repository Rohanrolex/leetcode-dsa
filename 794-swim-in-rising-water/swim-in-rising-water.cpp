#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n;
    vector<vector<int>> *g;

    bool canReach(int t) {
        // BFS from (0,0) with water level t
        if((*g)[0][0] > t) return false;
        vector<vector<int>> vis(n, vector<int>(n,0));
        queue<pair<int,int>> q;
        q.push({0,0});
        vis[0][0]=1;
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        while(!q.empty()){
            auto [x,y]=q.front();q.pop();
            if(x==n-1 && y==n-1) return true;
            for(int k=0;k<4;k++){
                int nx=x+dx[k], ny=y+dy[k];
                if(nx>=0 && nx<n && ny>=0 && ny<n && !vis[nx][ny]
                   && (*g)[nx][ny]<=t){
                    vis[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
        }
        return false;
    }

    int swimInWater(vector<vector<int>>& grid) {
        n = grid.size();
        g=&grid;
        // boundaries for binary search
        int low=max(grid[0][0],grid[n-1][n-1]);
        int high=0;
        for(auto &row:grid) for(int v:row) high=max(high,v);

        while(low<high){
            int mid=(low+high)/2;
            if(canReach(mid)) high=mid;
            else low=mid+1;
        }
        return low;
    }
};
