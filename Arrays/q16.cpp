//https://leetcode.com/problems/sum-of-all-subset-xor-totals/
 int subsetXORSum(vector<int>& nums) {
        int bits = 0;
        for (int i = 0; i < nums.size(); ++i) {
            bits |= nums[i];
        }
        int res = bits * (1<<(nums.size() - 1));
        return res;
    }
