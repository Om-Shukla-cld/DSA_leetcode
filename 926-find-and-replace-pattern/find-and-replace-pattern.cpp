class Solution {
public:
string normal(string s)
{
    unordered_map<char,char>mp;
    char next='a';
    for(int i=0;i<s.length();i++)
    {
        if(mp.find(s[i])==mp.end())
        {
            mp[s[i]]=next++;
        }
        s[i]=mp[s[i]];
    }
    return s;
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        string target = normal(pattern);
         vector<string> ans;
        for (string &word : words) {
            if (normal(word) == target) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};