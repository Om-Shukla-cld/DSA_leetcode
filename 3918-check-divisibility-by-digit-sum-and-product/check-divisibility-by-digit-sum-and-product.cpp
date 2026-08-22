class Solution {
public:
    bool checkDivisibility(int n) {
         int orig = n;
        int sum = 0;
        int prod = 1;

        while (n > 0) {
            int digit = n % 10;

            sum += digit;
            prod *= digit;

            n /= 10;
        }

        return orig % (sum + prod) == 0;
    }
};