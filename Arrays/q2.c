 //https://leetcode.com/problems/remove-element
 int removeElement(vector<int>& nums, int val) {
        if(nums.size()<1) return 0;
        int i=0,j=nums.size()-1;
        while(j>=0 && i<=j){
            if(nums[j]==val) --j;
            else if(nums[i]==val){
               nums[i]=nums[j];
                --j;
                ++i;
            }else ++i;
        }
        return j+1;}
