/*
118. Pascal's Triangle
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        v[0].resize(1);
        v[0][0] = 1;
        for(int i = 1; i < numRows; i++){
            v[i].resize(i+1);
            v[i][0] = 1;
            v[i][i] = 1;
            for(int j = 1; j < i; j++)
                v[i][j] = v[i-1][j-1] + v[i-1][j];
        }
        return v;
    }
};