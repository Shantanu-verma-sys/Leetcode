//https://leetcode.com/problems/decode-xored-array/
vector<int> decode(vector<int>& encoded, int first) {
        vector<int> dc(encoded.size()+1);
        dc[0]=first;
        for(int i=0;i<encoded.size();++i)
            dc[i+1] = dc[i]^encoded[i];
        return dc;
    }
