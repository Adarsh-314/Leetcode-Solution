class Solution {
public:
    int maxDistinct(string s) {
        set<char>k;
        for (int i=0; i<s.size(); i++) {
            k.insert(s[i]);
            
        }
        return k.size();
        
    }
};