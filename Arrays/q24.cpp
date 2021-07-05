//https://leetcode.com/problems/island-perimeter/
 inline static int at(vector<vector<int>>& grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()) return 0;
            return grid[i][j];
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int per = 0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j]) per += 4 - (at(grid,i+1,j)+at(grid,i-1,j)+at(grid,i,j+1)+at(grid,i,j-1));
            }
        }
        return per;
    }
