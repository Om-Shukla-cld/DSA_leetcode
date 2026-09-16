class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        long long goodPairs = 0, n = nums.size();

        for (int i = 0; i < n; i++) {
            int key = nums[i] - i;  // Key for this difference
            goodPairs += freq[key];  // Count good pairs
            freq[key]++;  // Update frequency map
        }

        return (n * (n - 1)) / 2 - goodPairs;  // Total pairs - Good pairs
    }
};