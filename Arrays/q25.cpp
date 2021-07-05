//https://leetcode.com/problems/range-sum-query-immutable/
NumArray(vector<int>& nums):cs(nums.begin()){
        partial_sum(nums.begin(), nums.end(), nums.begin(), plus<int>());

    }
    int sumRange(int left, int right) {
        if(!left) return cs[right];
        return cs[right]-cs[left-1];
    }
