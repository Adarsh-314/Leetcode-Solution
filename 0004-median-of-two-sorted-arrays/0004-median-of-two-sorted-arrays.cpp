class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalSize = nums1.size() + nums2.size(); 
        int mid = totalSize / 2;
        
        for (int i = 0; i < nums2.size(); i++) {
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin(), nums1.end());
        if (totalSize % 2 != 0) {
            return nums1[mid]; 
        } else {
            return (nums1[mid - 1] + nums1[mid]) / 2.0; 
        }
    }
};