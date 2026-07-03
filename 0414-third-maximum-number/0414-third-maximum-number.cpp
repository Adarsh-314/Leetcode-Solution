class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max = nums[nums.size()-1];
        int max1=max;
        int k=0;
        for(int i=nums.size()-1; i>=0; i--) {
            if(nums[i]<max1 ) {
                max1=nums[i];
                k++;
                
            }
            if(k==2) {
               max=nums[i];
               return max; 
            }

        }
        return max;
        
    }
};