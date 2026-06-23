class Solution {
public:
    int countWaviness(int n) {
        vector<int>v;
        while(n>0) {
            v.push_back(n%10);
            n/=10;
        }
        int cnt=0;
        for (int k=1; k<v.size()-1; k++) {
            if ((v[k]>v[k-1] && v[k]>v[k+1]) || (v[k]<v[k-1] && v[k]<v[k+1])) {
                cnt++;
            }
        }
        return cnt;
    }
    int totalWaviness(int num1, int num2) {
        if (num2<=100) return 0;
        int totalWaviness=0;
        for (int i=num1; i<=num2; i++) {
            totalWaviness+=countWaviness(i);

        }
        return totalWaviness;
        
    }
};