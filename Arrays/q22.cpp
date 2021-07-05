//https://leetcode.com/problems/image-smoother/
 vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> v(img.size(),vector<int>(img[0].size()));
        for(int i=0;i<img.size();++i){
            for(int j=0;j<img[0].size();++j){
                int total = (i>0)+(j>0)+(i<img.size()-1)+(j<img[0].size()-1)+(i>0 && j>0)+(i<img.size()-1 && j>0)+(i<img.size()-1 && j<img[0].size()-1)+(i>0 && j<img[0].size()-1)+1;

                int up = (i==0)?0:img[i-1][j];
                int down = (i==img.size()-1)?0:img[i+1][j];
                int left = (j==0)?0:img[i][j-1];
                int right = (j==img[0].size()-1)?0:img[i][j+1];
                int ul = (i <=0 || j<=0) ? 0:img[i-1][j-1];
                int ur = (i<=0 || j>=img[0].size()-1)?0:img[i-1][j+1];
                int dl = (i>=img.size()-1 || j==0)?0:img[i+1][j-1];
                int dr = (i>=img.size()-1 || j==img[0].size()-1)?0:img[i+1][j+1];
                v[i][j] = (up+down+left+right+ul+ur+dl+dr+img[i][j])/(total);

            }
        }
        return v;
    }
