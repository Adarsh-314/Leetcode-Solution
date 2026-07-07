class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long x = 0;
        long long placeValue = 1;

        while (n > 0) {
            long long digit = n % 10;
            n /= 10;

            sum += digit;

            if (digit != 0) {
                x = x + (digit * placeValue);
                placeValue *= 10;
            }
        }

        return x * sum;
    }
};