class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        ans.reserve(words.size());

        for (const string& word : words) {
            int current_weight = 0;
            for (char c : word) {
                current_weight = (current_weight + weights[c - 'a']) % 26;
            }
            ans += (char)('z' - current_weight);
        }

        return ans;
    }
};