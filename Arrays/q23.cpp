//https://leetcode.com/problems/shift-2d-grid/
 vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m  = grid.size();
        int n =  grid[0].size();
        vector<int> an(m*n);
        int idx = 0;
        for(const auto& i:grid){
            for(const auto& j:i){
                an[idx++] = j;
            }
        }
        k = k % an.size();
        int y = an.size()-k;
        for(auto& i:grid){
            for(auto& j:i){
                if(y >= an.size()) y=0;
                j = an[y++];
            }
        }
        return grid;
    }
