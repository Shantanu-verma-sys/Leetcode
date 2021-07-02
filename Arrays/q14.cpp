//https://leetcode.com/problems/truncate-sentence/
 string truncateSentence(string s, int k) {
        int j = 0;
        int n = s.length();
        while(k>0 && j<=n){
            if(s[j++]==' ') --k;
        }
        return s.substr(0,j-1);
    }
