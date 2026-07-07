class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> umap;
        int n = s.size();
        int low = 0, high=0;
        int ans = 0;
        for(high=0; high<n; high++){
            umap[s[high]]++;
            while(umap[s[high]] > 1){
                umap[s[low]]--;
                low++;
            }
            int len=high-low+1;
            ans=max(ans,len);
        }
        return ans;
    }
};