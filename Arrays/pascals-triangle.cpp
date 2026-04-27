Problem link ---> https://leetcode.com/problems/pascals-triangle/

Time Comp = O(N^2)
Space Comp = O(N^2)

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generatePascal(int numRows){
    
    vector<vector<int>> matrix;
  
  for(int i = 0; i < numRows; i++){
     vector<int>row(i+1,1);
  
    for(int j = 1; j < i; j++){
        row[j] = matrix[i-1][j-1] + matrix[i-1][j];
    }
       matrix.push_back(row);
  }
  return matrix;
}

int main() {
    
  int n = 5;
  vector<vector<int>>result = generatePascal(n);
   
   for(int i = 0; i < result.size(); i++){
       for(int j = 0; j < result[i].size(); j++){
           std::cout << result[i][j] << " ";
       }
          std::cout << endl;
   }
    return 0;
}