//https://leetcode.com/problems/array-partition-i/
 int arrayPairSum(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int s=0;
        int n = nums.size()>>1;
        int i=-1;
        while(++i<n) s += nums[i<<1];
        return s;
    }
