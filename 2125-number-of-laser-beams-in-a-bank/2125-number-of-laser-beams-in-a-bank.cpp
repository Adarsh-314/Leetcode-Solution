class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int laser = 0;
        int prev_row_cnt = 0;
        for (int i = 0; i < bank.size(); i++) {
            int curr_row_cnt = 0;
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1') {
                    curr_row_cnt++;
                }
            }
            if (curr_row_cnt > 0) {

                laser += prev_row_cnt * curr_row_cnt;
                prev_row_cnt = curr_row_cnt;
            }
        }

        return laser;
    }
};