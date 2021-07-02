//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
 vector<int> sortByBits(vector<int>& arr) {
        sort(begin(arr),end(arr),[](auto x,auto y){
            auto xi = __builtin_popcountll(x);
            auto yi = __builtin_popcountll(y);
            if(xi==yi) return x<y;
            return xi<yi;
        });
        return arr;
    }
