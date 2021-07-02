//https://leetcode.com/problems/shuffle-string/
  string restoreString(string s, vector<int>& indices) {
        vector<char> v(s.length());
        string res;
        for(int i=0;i<indices.size();++i)
            v[indices[i]] = s[i];
        for(const auto& i:v)
            res += i;
        return res;
    }
