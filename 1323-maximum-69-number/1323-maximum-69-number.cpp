class Solution {
public:
    int maximum69Number (int num) {
        int ans=0;
        vector<int>v;
        while (num>0) {
            v.push_back(num%10);
            num/=10;
        }
        for(int i=v.size()-1; i>=0; i--) {
            if (v[i]!=9) {
                v[i]=9;
                break;
            }
        }
        int m=1;
        for (int i=0; i<v.size(); i++) {
            ans+=m*v[i];
            m*=10;
        }
        return ans;
    }
};