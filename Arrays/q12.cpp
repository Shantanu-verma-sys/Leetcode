//https://leetcode.com/problems/create-target-array-in-the-given-order/
 vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
       list<int> l;
        auto it = l.begin();
        int old = 0;
        for(int i=0;i<nums.size();++i){
            advance(it,index[i]-index[old]-1);
            l.insert(it,nums[i]);
            old = i;
        }
        vector<int> v{ make_move_iterator(std::begin(l)),make_move_iterator(std::end(l)) };
        return v;
    }
