//https://leetcode.com/problems/count-the-number-of-consistent-strings/
 int countConsistentStrings(string allowed, vector<string>& words) {
          int c=0;
        bool map[27]={0};
        for(const auto& i:allowed) map[i-'a']=1;

        for(const auto& i:words){
            bool f=false;
            for(const auto& j:i)
                if(!map[j-'a']){f=1; break;}
            if(!f) ++c;

        }
        return c;
    }
