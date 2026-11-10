class Solution {
public:
    long long countValidSubstrings(string s) {
        int n = s.length();
        long long count = 0;
        int left = 0;

        for(int i = 0; i < n; i++){
            if(i >= 2 && s[i - 2] == 'a' && s[i - 1] == 'b' 
               && s[i] == 'c'){
                left = i - 1;
            }

            count += i - left + 1;
        }

        return count;
    }
};