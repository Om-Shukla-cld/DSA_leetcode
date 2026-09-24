class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int sum = 0;

            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }

            if (sum == i) {
                return i;   // smallest index milte hi return
            }
        }

        return -1;  // agar koi index nahi mila
    }
};