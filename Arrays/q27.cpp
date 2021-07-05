//https://leetcode.com/problems/toeplitz-matrix/
 bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int steps = 0;
            for(int j=0;j<matrix[0].size()-1;++j){
                int k=0;
                while(k+1 < matrix.size() && j+k+1 < matrix[0].size()){
                    ++steps;
                    if(matrix[k][j+k]!=matrix[k+1][j+k+1]) return 0;
                    ++k;
                }
            }
         for(int j=0;j<matrix.size()-1;++j){
                int k=0;
                while(k+1 < matrix[0].size() && j+k+1 < matrix.size()){
                     ++steps;
                    if(matrix[j+k][k]!=matrix[j+k+1][k+1]) return 0;
                    ++k;
                }
            }
        cout<<steps;
        return 1;
    }
