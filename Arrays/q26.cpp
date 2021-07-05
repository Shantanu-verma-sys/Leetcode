//https://leetcode.com/problems/flood-fill/
 void infect(vector<vector<int>> &x,int i,int j,int n){
        int tp = x[i][j];
        x[i][j]=n;
        if(tp==n) return;
        if(i<x.size()-1 && x[i+1][j]==tp) infect(x,i+1,j,n);
        if(i>0 && x[i-1][j]==tp) infect(x,i-1,j,n);
        if(j<x[0].size()-1 && x[i][j+1]==tp) infect(x,i,j+1,n);
        if(j>0 && x[i][j-1]==tp) infect(x,i,j-1,n);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        infect(image,sr,sc,newColor);
        return image;
    }
