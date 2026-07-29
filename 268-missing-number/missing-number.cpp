class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        for (int i = 0; i <= n; i++) {

            bool found = false;

            for (int j = 0; j < n; j++) {

                if (nums[j] == i) {
                    found = true;
                    break;
                }

            }

            if (!found)
                return i;
        }

        return -1;
    }
};


//optimal

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int expectedSum = (n * (n + 1)) / 2;  // Sum of first n natural numbers
//         int actualSum = 0;

//         for(int i = 0; i < n; i++) {
//             actualSum += nums[i];  // Adding all elements of the array
//         }

//         return expectedSum - actualSum;  // Missing number is the difference
//     }
// };