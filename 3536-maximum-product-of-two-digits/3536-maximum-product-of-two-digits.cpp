class Solution {
public:
    int maxProduct(int n) {
        vector<int>v;
        while (n>0) {
            v.push_back(n%10);
            n/=10;
        }
        sort(v.begin(), v.end());
        n=v.size();
        return v[n-2]*v[n-1];
    }
};