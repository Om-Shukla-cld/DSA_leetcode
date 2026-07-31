

//Approach-3 (Using simple bit magic)
//T.C : O(log(n)) -> In each iteration, n is divided by 2 (n /= 2)
//S.C : O(1)
// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//         int count = 0;
        
//         while(n) {
//             count += (n%2);
//             n /= 2;
//         }
        
//         return count;
//     }
// };

//Approach-4 (using GCC built-in function)
//T.C : O(k) -> Where k = number of set bits (1s) in input 'n'
//S.C : O(1)
class Solution {
public:
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
    }
};
