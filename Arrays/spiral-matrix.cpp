Problem Link ---> https://leetcode.com/problems/spiral-matrix/description/

Time Comp = O(NxM);
Space Comp = O(1);

#include <iostream>
#include <vector>

using namespace std;

void spiralMatrix(vector<vector<int>>matrix){
   
   int n = matrix.size();
   
   int top = 0;
   int bottom = n-1;
   int left = 0;
   int right = n-1;
   
   while(top <= bottom && left <= right){
       
      //Top elements
      for(int i = left; i <= right; i++){
          std::cout << matrix[top][i] << " ";
      }
         std::cout << '\n';
      top++;
      
      //Right elements
      for(int i = top; i <= bottom; i++){
          std::cout << matrix[i][right] << " ";
      }
        std::cout << '\n';
      right--;
      
      //Bottom elements
      for(int i = right; i >= left; i--){
          std::cout << matrix[bottom][i] << " ";
      }
      std::cout << '\n';
      bottom--;
      
      //Left elements
      for(int i = bottom; i >= top; i--){
          std::cout << matrix[i][left] << " ";
      }
      left++;
   }
}

int main()
{
    vector<vector<int>>matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    
    spiralMatrix(matrix);

    return 0;
}