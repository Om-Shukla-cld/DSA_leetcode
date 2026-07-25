class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        int i = 0;
        while (n > 0) {
            ans.push_back(n%10);
            n /= 10;
            i++;
        }
        sort(ans.begin(),ans.end());
        return ans[i - 1]*ans[i - 2];
    }
};