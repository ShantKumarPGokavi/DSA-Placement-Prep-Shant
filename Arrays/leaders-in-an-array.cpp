//Brute
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void leader(vector<int>arr){
    int n = arr.size();
    int current_max = INT_MIN;
    
    vector<int>ldr;
    
    for(int i = n-1; i >= 0; i--){
        if(arr[i] > current_max){
            ldr.push_back(arr[i]);
            current_max = arr[i];
        }
    }
   std::reverse(ldr.begin(), ldr.end());
    
    for(auto it : ldr){
        std::cout << it << " ";
    }
    
}

int main()
{
    vector<int>arr = {1,2,5,3,1,2};
    if(arr.empty()){
        std::cout << "Array is empty";
    }
    leader(arr);
     return 0;
}