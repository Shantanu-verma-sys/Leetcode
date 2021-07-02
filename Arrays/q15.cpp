//https://leetcode.com/problems/unique-morse-code-words/
  int uniqueMorseRepresentations(vector<string>& words) {
        char* morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(const auto& i:words){
            string r;
            for(const auto& j:i){
                r += morse[j-'a'];
            }
            s.insert(r);
        }
        return s.size();
    }
