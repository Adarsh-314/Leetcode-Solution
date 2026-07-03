class Solution {
public:
    int nextGreaterElement(int n) {
        int temp = n;
        vector<int> nums;
        int x = 0;

        while (n != 0) {
            x = n % 10;
            nums.push_back(x);
            n = n / 10;
        }

        reverse(nums.begin(), nums.end());

        next_permutation(nums.begin(), nums.end());

        string s = "";
        for (int x : nums)
            s += to_string(x);
        long long result = stoll(s);;

        if (result <= temp || result > INT32_MAX) {
            return -1;
        }

        return result;
    }
};