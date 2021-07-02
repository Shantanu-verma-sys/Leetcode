//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = *max_element(begin(candies),end(candies));
        vector<bool> v(candies.size());
        int j=0;
        for(const auto& i:candies)
            if(i+extraCandies >= m)
                v[j++] = true;
            else v[j++] = false;
        return v;
    }
