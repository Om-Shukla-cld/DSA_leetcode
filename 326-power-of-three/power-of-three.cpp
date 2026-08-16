class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false; // Negative numbers and zero are not valid
        
        while (n % 3 == 0) { // Keep dividing n by 3
            n /= 3;
        }
        
        return n == 1; // If it becomes 1, it's a power of 3
    }
};
