//https://leetcode.com/problems/height-checker/
 int heightChecker(vector<int>& heights) {
        vector<int> exp(heights);
        sort(begin(exp),end(exp));
        int n=heights.size();
        int k=0;
        for(int i=0;i<n;++i)
            if(heights[i]!=exp[i]) ++k;
        return k;
    }
