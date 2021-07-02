//https://leetcode.com/problems/number-of-good-pairs/
   int numIdenticalPairs(vector<int>& nums) {
        int n[101]={0};
        for(const auto& i:nums) ++n[i];
        int s=0;
        for(int i=0;i<101;++i){
            if(n[i]>1){
                s += ((n[i]*(n[i]-1))>>1);
            }
        }
                      return s;
    }
