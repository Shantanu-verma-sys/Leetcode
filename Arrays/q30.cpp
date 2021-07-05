//https://leetcode.com/problems/projection-area-of-3d-shapes/
 int projectionArea(vector<vector<int>>& grid) {
        int top = 0;



        for(auto& i:grid) for(auto& j:i) top += (j>0);
        int front = 0;
        for(int j=0;j<grid[0].size();++j){
            int m=grid[0][j];
            for(int i=1;i<grid.size();++i){
                if(grid[i][j]>m) m=grid[i][j];
            }
            front+=m;
        }
        int side=0;
        for(int i=0;i<grid.size();++i){
            int m = grid[i][0];
            for(int j=1;j<grid[0].size();++j){
                if(grid[i][j]>m) m =grid[i][j];
            }
            side+=m;
        }
        return front+top+side;
    }
