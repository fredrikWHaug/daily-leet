class Solution {
public:

    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> rowResult;
        rowResult.push_back(1);
        for (int i = 1; i < row; i ++) {
            ans = ans * (row - i);
            ans = ans / (i);
            rowResult.push_back(ans);
        }
        return rowResult;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for (int i = 1; i <= numRows; i ++) {
            triangle.push_back(generateRow(i));
        }
        return triangle;
    }
};
