//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp(nums);
        vector<int> v(nums.size());
        sort(begin(temp),end(temp));
        for(int i=0;i<nums.size();++i){
            int id = distance(temp.begin(),lower_bound(temp.begin(),temp.end(),nums[i]));
            v[i] = id;
        }
        return v;
    }
