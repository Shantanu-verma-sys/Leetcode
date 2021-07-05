//https://leetcode.com/problems/reshape-the-matrix/
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c != (mat.size()*mat[0].size())) return mat;
        vector<vector<int>> res(r,vector<int>(c));
        int x=0,y=0;
        for(const auto& i:mat){
            for(const auto& j:i){
                res[x][y++] = j;
                if(y>=c) {++x;y=0;}
            }
        }
        return res;
    }
