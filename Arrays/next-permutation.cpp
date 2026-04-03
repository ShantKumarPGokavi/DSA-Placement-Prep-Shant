//Brute
1) Generate a list of permutations of the given arr;
2) Do a Linear search for the given array;
3)When you get the array after the search, the arr next to the given arr is the array we are finding





// Better
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void nextPerm(vector<int>arr){
    int n = arr.size();
    int pivot = INT_MIN;
    
    for(int i = 0; i < n; i++){
      std::next_permutation(arr.begin(), arr.end());
      break;
    }
    for(auto it : arr){
        std::cout << it << " ";
    }
}

int main()
{
   vector<int>arr = {2,1,5,4,3,0};
   nextPerm(arr);

    return 0;
}




//Optimal
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void nextPerm(vector<int>arr){
    int n = arr.size();
    int pivot = INT_MIN;
    
    for(int i = n-2; i >= 0; i--){
        if(arr[i] < arr[i+1]){
            pivot = i;
            break;
        }
    }
    for(int i = n-1; i >= pivot; i--){
        if(arr[i] > arr[pivot]){
            std::swap(arr[i],arr[pivot]);
            break;
        }
    }
    std::reverse(arr.begin() + pivot + 1, arr.end());
    
    for(auto it : arr){
       std::cout << it << " ";
    }
    
}

int main()
{
   vector<int>arr = {2,1,5,4,3,0};
   if(arr.empty()){
    std::cout << "Array is empty";
    return 0;
   }
   nextPerm(arr);

    return 0;
}
