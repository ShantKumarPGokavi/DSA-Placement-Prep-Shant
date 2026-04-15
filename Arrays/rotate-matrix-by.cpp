Problem Link ---> https://leetcode.com/problems/rotate-image/description/

Time comp = O(N x N);
Space comp = O(i);

#include <iostream>
#include <vector>

using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return;
    int m = matrix[0].size();

    // STEP 1: Transpose (Only works for Square N*N matrices)
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }

    // STEP 2: Reverse each row
    for(int i = 0; i < n; i++) {
        int left = 0;
        int right = n - 1; 
        while(left < right) {
            std::swap(matrix[i][left], matrix[i][right]);
            left++;
            right--;
        }
    }

    // Printing
    for(auto it : matrix) {
        for(auto element : it) {
            std::cout << element << " ";
        }
        std::cout << '\n';
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16},
    };
    
    rotateMatrix(matrix);
    return 0;
}