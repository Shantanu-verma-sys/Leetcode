  //https://leetcode.com/problems/shuffle-the-array/
   vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(nums.size());
        int i=-1,j=0;
        while(++i<n){
            res[j] = nums[i];
            res[j+1] = nums[n+i];
            j+=2;
        }
        return res;
    }
