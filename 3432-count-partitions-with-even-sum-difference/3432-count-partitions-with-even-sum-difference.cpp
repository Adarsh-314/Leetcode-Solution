class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total_sum = 0;
        for (int i : nums) {
            total_sum += i;
        }
        if (total_sum % 2 == 0) {
            return nums.size() - 1;
        } else {
            return 0;
        }
    }
};