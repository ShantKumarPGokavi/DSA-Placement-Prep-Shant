//Brute
#include <iostream>
#include <vector>

using namespace std;

void sorting(vector<int>&arr){
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
      for(int j = i+1; j < n; j++){
          if(arr[j] < arr[i]){
              std::swap(arr[i], arr[j]);
          }
      }
  }
  for(int i = 0; i < n; i++){
      std::cout << arr[i] << " ";
    }
}

int main() {
    
    vector<int> arr = {0,0,1,2,0,1,0,2,1,2,0,1,2,2,1,1,2};
    if(arr.empty()){
        std::cout << "The array is empty";
    }
    sorting(arr);

    return 0;
}

//Optimal - Dutch National Flag algorithm

#include <iostream>
#include <vector>

using namespace std;

void sorting(vector<int>&arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    
    while(mid <= high){
        if(arr[mid] == 0){
          std::swap(arr[mid], arr[low]);
          low++;
          mid++;
        }
        else if(arr[mid] == 2){
            std::swap(arr[mid], arr[high]);
            high--;
        }
        else if(arr[mid] == 1){
            mid++;
        }
    }
     for(auto it : arr){
         std::cout << it << " ";
     }
  
}

int main() {
    
    vector<int> arr = {0,0,1,2,0,1,0,2,1,2,0,1,2,2,1,1,2};
    if(arr.empty()){
        std::cout << "The array is empty";
    }
    sorting(arr);

    return 0;
}


