class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sums(0);
        int add =0;
        for(int i=0; i<nums.size(); i++) {
            add=add+nums[i];
            sums.push_back(add);

        }
        return sums;
        
    }
};