class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return gcd(nums[0], nums.back());
    }
};



//anathor solution 

// class Solution {
// public:
//     int findGCD(vector<int>& nums) {

//         int mn = INT_MAX;
//         int mx = INT_MIN;

//         for (int x : nums) {
//             mn = min(mn, x);
//             mx = max(mx, x);
//         }

//         // GCD of the smallest and largest element.
//         return gcd(mn, mx);
//     }
// };