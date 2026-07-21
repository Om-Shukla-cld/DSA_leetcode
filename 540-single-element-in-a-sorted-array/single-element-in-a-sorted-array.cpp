class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n =nums.size();
        int xori = 0;
        for(int i =0;i<n;i++){
            xori = nums[i]^xori;
        }

        return xori;
        
    }
};