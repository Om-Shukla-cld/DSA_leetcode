class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int up = 1;
        int down = 1;
        for (int i = 1; i < nums.size(); i++) {
            up = nums[i - 1] < nums[i] ? up + 1 : 1;
            down = nums[i - 1] > nums[i] ? down + 1 : 1;
            ans = max(ans, max(up, down));
        }
        return ans;
    }
};