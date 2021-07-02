 //https://leetcode.com/problems/intersection-of-two-arrays
 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int ll[1001]={0};
        for(const auto& i:nums1){
            if(!ll[i]) ++ll[i];
        }
        for(const auto& i:nums2){
            if(ll[i]==1) ++ll[i];
        }
        vector<int> inter;
        int i=0;
        while(i<1000){ if(ll[i]==2) inter.push_back(i);++i;}
        return inter;
    }
