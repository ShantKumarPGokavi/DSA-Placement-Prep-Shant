//Brute
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void longest (vector<int>&arr){
    int n = arr.size();
    int k = 15;
    int maxLen = 0;
    for(int i = 0; i < n; i++){
        int sum = 0; // keep updating the sum
     for(int j = i; j < n; j++){
         sum = sum + arr[j];
         if(sum == k){
             maxLen = max(maxLen, j-i+1);//maximum of the two
         }
       }
    }
      std::cout << "The maximum length is : " << maxLen; 
    }

int main() {
    
    vector<int> arr= {10,5,2,7,1,9,6};
    if(arr.empty()){
        std::cout << "Nothing found";
        return 0;
    }
    longest(arr);

    return 0;
}


//Optimal

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

void longest(vector<int>&arr){
    int n = arr.size();
    int k = 15;
    int left = 0;
    int sum = 0;
    int maxLen = 0;
    
  for(int right = 0; right < n; right++){
       sum = sum + arr[right];
       
     while(left <= right && sum > k){
         sum = sum - arr[left];
         left++;
     }
     if(sum == k){
         maxLen = max(maxLen, right-left+1);
     }
  }
  std::cout << "The longest subarray is " << maxLen;
}

int main() {
    
    vector<int> arr = {10,5,2,7,1,9};
    longest(arr);

    return 0;
}