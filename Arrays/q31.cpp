//https://leetcode.com/problems/surface-area-of-3d-shapes/
 int surfaceArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int now=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                const int& k = grid[i][j];
                if(!k) continue;
                now += k*6 - (2*(k-1));
                if(i<n-1 && grid[i+1][j]) now -= (min(k,grid[i+1][j])*2);
                if(j<m-1 && grid[i][j+1]) now -= (min(k,grid[i][j+1])*2);
            }
        }
        return now;
    }
