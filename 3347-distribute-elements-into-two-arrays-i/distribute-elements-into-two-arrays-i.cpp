class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> num1;
        vector<int> nums2;

        num1.push_back(nums[0]);
        nums2.push_back(nums[1]);

        for (int i = 2; i < n; i++) {
            if (num1.back() > nums2.back())
                num1.push_back(nums[i]);
            else
                nums2.push_back(nums[i]);
        }

        num1.insert(num1.end(), nums2.begin(), nums2.end());

        return num1;
    }
};