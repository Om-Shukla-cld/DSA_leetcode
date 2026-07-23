class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;
        for (char c : word) {
            if (isupper(c)) upper++;
        }

        return upper == word.size() ||        // All letters uppercase
               upper == 0 ||                  // All letters lowercase
               (upper == 1 && isupper(word[0])); // Only first letter uppercase
    }
};