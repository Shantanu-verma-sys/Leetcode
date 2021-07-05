//https://leetcode.com/problems/flipping-an-image/
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

         int n=image.size();
        int m=image[0].size();
        int i,j;
        int p = (m&1)?((m>>1)+1):(m>>1);
        for(i=0;i<n;++i){
            for(j=0;j<p;++j){
                int temp = image[i][m-j-1];
                image[i][m-j-1] = !image[i][j];
                image[i][j]=!temp;
            }
        }
        return image;
    }
