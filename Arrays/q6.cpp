//https://leetcode.com/problems/richest-customer-wealth/
 int maximumWealth(vector<vector<int>>& accounts) {
        int m = 0;
        int c=0;
        for(int i=0;i<accounts.size();++i){
            int c = accumulate(accounts[i].begin(),accounts[i].end(),0);
            if(c>m) m=c;
        }
        return m;
    }
