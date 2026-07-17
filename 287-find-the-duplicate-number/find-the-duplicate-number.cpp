class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n, 0); 

        for (int num : nums) {  
            count[num]++;  
            if (count[num] > 1) return num; 
        }

        return -1; 
    }
};