//Brute

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    
  vector<int> arr1 = {1,1,1,2,2,2,2};
  vector<int> arr2 = {1,1,2,2,3,3,4};
  
  int n = arr1.size();
  int m = arr2.size();
  
  if(arr1.empty() && arr2.empty()){
    std::cout << "No elements in the array";
  }

  set<int>st;
  
  //Insert the two arrays in the same set and print
  for(int i = 0; i < n; i++){
      st.insert(arr1[i]);
  }
  for(int j = 0; j < m; j++){
      st.insert(arr2[j]);
  }
  
  for(auto it : st){
      std::cout << it << " ";
  }
  
    return 0;
}


//Optimised

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
  vector<int> arr1 = {1,1,1,2,2,2,2};
  vector<int> arr2 = {1,1,2,2,3,3,4};
  
  int n = arr1.size();
  int m = arr2.size();
  
  int i = 0;
  int j = 0;
  
  vector<int>unionn;
  
  if(arr1.empty() && arr2.empty()){
    std::cout << "No elements in the array";
    return 0;
  }
  
  //Check To see if the number we are about to add is already there(presence of duplicate numbers). empty()
  while(i < n && j < m){
    if(arr1[i] <= arr2[j]){
      if(unionn.empty() || unionn.back() != arr1[i]){
          unionn.push_back(arr1[i]);
      }
      i++;
    }
    
     else{
      if(unionn.empty() || unionn.back() != arr2[j]){
          unionn.push_back(arr2[j]);
      }
      j++;
      }
    }
  
   //To check if any extra elements are left in the array arr1
  while(i < n){
      if(unionn.back() != arr1[i]){
        unionn.push_back(arr1[i]);
      }
      i++;
  }
  
  //To check if any extra elements are left in the array arr2
  while(j < m){
      if(unionn.back() != arr2[j]){
        unionn.push_back(arr2[j]);
      }
      j++;
  }
  
  for(auto it : unionn){
      std::cout << it << " ";
  }
  
    return 0;
}