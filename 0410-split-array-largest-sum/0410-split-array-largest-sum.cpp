class Solution {
public:
   
    int countSubarrays(vector<int>& nums, int maxCapacity) {
        int subarraysCount = 1;
        int currentSubarraySum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (currentSubarraySum + nums[i] <= maxCapacity) {
                currentSubarraySum += nums[i];
            } else {
                subarraysCount++;
                currentSubarraySum = nums[i];
            }
        }
        return subarraysCount;
    }

    int splitArray(vector<int>& nums, int k) {
        int maxElement = 0;
        int totalSum = 0;
        
      
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxElement) {
                maxElement = nums[i];
            }
            totalSum += nums[i];
        }
        
        int low=maxElement; int high = totalSum;
        while (low<=high) {
            int mid = low + (high-low)/2;            
            int requiredSubarrays = countSubarrays(nums, mid);
            
            if (requiredSubarrays <= k) {
                high = mid-1;
            }
            else {
                low=mid+1;
            }
        }
        
        return low;
    }
};