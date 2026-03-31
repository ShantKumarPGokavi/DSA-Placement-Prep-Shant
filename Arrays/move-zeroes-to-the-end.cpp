//Brute
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
  vector<int> arr = {1,0,2,0,5,0,0,0,4,6};
  int n = arr.size();
  vector<int> temp;
  
  //Take out the non zero nums and store them in the temp arr
  int j = 0;
  for(int i = 0; i < n; i++){
      if(arr[i] != 0){
          temp.push_back(arr[i]);
      }
      j++;
  }
  
  //Insert the temp ele in the original array
  for(int i = 0; i < temp.size(); i++){
      arr[i] = temp[i];
  }
  
  //Insert zeroes to the original array
  for(int i = temp.size(); i < n; i++){
      arr[i] = 0;
  }
  
  //Printing 
  for(auto it : arr){
      std::cout << it << " ";
      
  }
    return 0;
}


//Optimal

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
  vector<int> arr = {1,0,2,0,3,2,0,0,2,0,8};
  int n = arr.size();
  vector<int> temp;
  
  //If the array is empty
  if(arr.empty()){
      std::cout << "Array is empty";
  }
  
  //Find the first zero
  int j = -1;
  for(int i = 0; i < n; i++){
     if(arr[i] == 0){
         j = i;
         break;
     }
  }
  
  //Find the next non zero and swap them
  for(int i = j+1; i < n; i++){
      if(arr[i] != 0){
          std::swap(arr[i],arr[j]);
          j++;
      }
  }
  
  //Printing 
  for(auto it : arr){
      std::cout << it << " ";
      
  }
    return 0;
}