#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> arr = {2,1,3,4,5,6,8};
    int n = arr.size();
    int drop = 0;
    
    for(int i = 0; i < n; i++){
      if(arr[i] > arr[(i+1) % n]){
          drop++;   
        }
    }
      
    if(drop <= 1){
        std::cout << "Rotated and Sorted";
    }
    else{
        std::cout << "No R and S";
    }

    return 0;
}