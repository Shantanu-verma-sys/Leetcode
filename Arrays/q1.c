//https://leetcode.com/problems/remove-duplicates-from-sorted-array
int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
          size_t i=0,j=0;
    while(++j < nums.size()){
        if(nums[i]!=nums[j]) swap(nums[(i++)+1],nums[j]);
    }
    return i+1;
}
