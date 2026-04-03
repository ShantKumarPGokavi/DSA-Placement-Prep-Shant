//Brute
#include <iostream>
#include <vector>

using namespace std;

void maximum_sum(vector<int>&arr){
    int n = arr.size();
    int largest = 0;
    
    for(int i = 0; i < n; i++){
      for(int j = i; j < n; j++){
           int sum = 0;
        for(int k = i; k < j; k++){
           sum = sum + arr[k];
        if(sum > largest){
            largest = sum;
        }
       }
      }
    }
  std::cout << "Largest sum : " << largest;
}

int main()
{
   
    vector<int>arr = {2,3,5,-2,7,-4};
    if(arr.empty()){
        std::cout << "Array is empty";
        return 0;
    }
    maximum_sum(arr);
   
    return 0;
}



//Better
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void maximum_sum(vector<int>&arr){
    int n = arr.size();
    int largest = 0;
    
    for(int i = 0; i < n; i++){
        int sum = 0;
      for(int j = i; j < n; j++){
          sum = sum + arr[j];
        if(sum > largest){
            largest = max(largest, sum);
        }
    }
  }
  std::cout << "Largest sum : " << largest;
}

int main()
{
   
    vector<int>arr = {1,2,3,4,-5};
    if(arr.empty()){
        std::cout << "Array is empty";
        return 0;
    }
    maximum_sum(arr);
   
    return 0;
}




//Optimal
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void maximum_sum(vector<int>&arr){
    int n = arr.size();
    int sum = 0;
    int largest = INT_MIN;
    
    for(int i = 0; i < n; i++){
      sum = sum + arr[i];
      
      if(sum > largest){
          largest = sum;
      }
      if(sum < 0){
          sum = 0; //reset it to zero and start fresh
      }
    }
  std::cout << "Largest sum : " << largest;
}

int main()
{
   
    vector<int>arr = {-2, -3, -7, -2, -10, -4};
    if(arr.empty()){
        std::cout << "Array is empty";
        return 0;
    }
    maximum_sum(arr);
   
    return 0;
}