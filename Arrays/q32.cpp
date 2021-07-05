//https://leetcode.com/problems/available-captures-for-rook/
 int numRookCaptures(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        int c=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(board[i][j]=='R'){
                    for(int k=j-1;k>=0;--k){
                        if(board[i][k]=='.') continue;
                        if(board[i][k]=='p') ++c;
                        break;
                    }
                    for(int k=j+1;k<m;++k){
                        if(board[i][k]=='.') continue;
                        if(board[i][k]=='p') ++c;
                        break;
                    }
                    for(int k=i-1;k>=0;--k){
                        if(board[k][j]=='.') continue;
                        if(board[k][j]=='p') ++c;
                        break;
                    }
                    for(int k=i+1;k<n;++k){
                        if(board[k][j]=='.') continue;
                        if(board[k][j]=='p') ++c;
                        break;
                    }
                    return c;
                }
            }
        }
        return 0;
    }
