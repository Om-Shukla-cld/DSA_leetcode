class Solution {
public:
//kadane algo
    int maxSubArray(vector<int>& nums) {
    int currsum = 0, maxsum = INT_MIN;

    for(int val: nums) {
        currsum += val;  //surrsum me value joda 
        maxsum = max(currsum,maxsum);  

        if(currsum < 0){
             currsum = 0;
        }
        
    } 
       return maxsum;
    }
};


//TC:O(n2)
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int ans = INT_MIN;

//         for (int i = 0; i < n; i++) {
//             int sum = 0;

//             for (int j = i; j < n; j++) {
//                 sum += nums[j];
//                 ans = max(ans, sum);
//             }
//         }

//         return ans;
//     }
// };