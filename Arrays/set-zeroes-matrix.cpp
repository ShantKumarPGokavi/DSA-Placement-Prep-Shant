Problem Link ---> https://leetcode.com/problems/set-matrix-zeroes/description/

Time Comp = O(N x M);
Space Comp = O(N+M);

#include <iostream>
#include <vector>

using namespace std;

void setMatrixzero(vector<vector<int>>&matrix){
    
  int n = matrix.size();
  int m = matrix[0].size();
  
  vector<int>rowMark(n,0);
  vector<int>colMark(m,0);
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        if(matrix[i][j] == 0){
            rowMark[i] = 1;
            colMark[j] = 1;
        }
    }
  }
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        if(rowMark[i] == 1 || colMark[j] == 1){
            matrix[i][j] = 0;
        }
    }
  }
  
  for(auto it : matrix){
     for(auto elements : it){
         std::cout << elements << " ";
         }
        std::cout << '\n';
     }
}

int main() {
    
  vector<vector<int>> matrix = {
      {1,1,1},
      {1,0,1},
      {1,1,1},
  };
  setMatrixzero(matrix);
    return 0;
}