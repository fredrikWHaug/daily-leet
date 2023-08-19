class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        vector<int> row1 = {1, 1};
        triangle.push_back(row1);
        std::cout << row1 << std::endl;
        return triangle;
    }
};
