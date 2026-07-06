#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> next_greater;
        for (int num : nums2) {
           
            while (!s.empty() && num > s.top()) {
                next_greater[s.top()] = num;
                s.pop();                   
            }
            s.push(num); 
        }
        while (!s.empty()) {
            next_greater[s.top()] = -1;
            s.pop();
        }
        
        vector<int> ans;
        for (int num : nums1) {
            ans.push_back(next_greater[num]);
        }
        
        return ans;
    }
};