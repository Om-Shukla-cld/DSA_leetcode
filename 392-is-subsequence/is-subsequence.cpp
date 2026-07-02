class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {

        //two pointer use karo 
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == s.size();
    }
};