class Solution {
public:
    long long formNumber(vector<int>& v) {
        long long number = 0;
       for (int i = v.size() - 1; i >= 0; i--) {
            number = number * 10 + v[i]; 
        }
        return number;
    }
    long long sumAndMultiply(int n) {
        long long ans;
        vector<int> v;
        long long k = n;
        long long x;
        long long sum = 0;
        while (k > 0) {
            if (k%10 != 0) {
                v.push_back(k % 10);
            }
            sum += k % 10;
            k /= 10;
        }
        x = formNumber(v);
        ans = x * sum;
        return ans;
    }
};