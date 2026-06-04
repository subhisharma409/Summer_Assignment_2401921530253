#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();

        // Check if reshape is possible
        if (rows * cols != r * c) {
            return mat;
        }

        vector<vector<int>> result(r, vector<int>(c));

        for (int i = 0; i < rows * cols; i++) {
            int oldRow = i / cols;
            int oldCol = i % cols;

            int newRow = i / c;
            int newCol = i % c;

            result[newRow][newCol] = mat[oldRow][oldCol];
        }

        return result;
    }
};