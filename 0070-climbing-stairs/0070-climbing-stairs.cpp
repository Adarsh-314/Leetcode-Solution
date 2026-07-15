class Solution {
public:
    int climbStairs(short n) {
        if (n <= 2) return n;
        
        int first = 1;  // Ways to reach step 1
        int second = 2; // Ways to reach step 2
        
        for (short i = 3; i <= n; i++) {
            int current = first + second;
            first = second;
            second = current;
        }
        
        return second;
    }
};
