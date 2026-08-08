class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0; // index to place the next non-zero number

        // Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[index++] = nums[i];
            }
        }

    
        while (index < nums.size()) {
            nums[index++] = 0;
        }
    }
};