class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for (int i = 0; i < numRows; i++) {
            v[i].push_back(1);
            for (int j = 1; j < i; j++) {
                v[i].push_back(v[i-1][j-1] + v[i-1][j]);
            }
            if (i > 0)
                v[i].push_back(1);
        }
        return v;
    }
};