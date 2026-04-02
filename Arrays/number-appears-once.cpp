//Brute
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void count (vector<int>&arr){
    int n = arr.size();
  //Store the numbers in a map count the numbers
    unordered_map<int,int>mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]] = mpp[arr[i]] + 1;
    }
    for(auto it : mpp){
        if(it.second == 1){
            std::cout << it.first << " has appeared " << it.second; 
        }
    }
}

int main() {
    
    vector<int> arr= {1,2,3,6,3,2,1,2,2,3};
     if(arr.empty()){
        std::cout << "Nothing found";
        return 0;
    }
    count(arr);

    return 0;
}


//Optimized
#include <iostream>
#include <vector>

using namespace std;

void count (vector<int>&arr){
    int n = arr.size();
    int xorr = 0;
    for(int i = 0; i < n; i++){
        xorr = xorr ^ arr[i];
    }
    std::cout << "The number that apppeared only once is " << xorr;
}

int main() {
    
    vector<int> arr= {1,2,3,6,3,2,1,2,2,3};
    if(arr.empty()){
        std::cout << "Nothing found";
        return 0;
    }
    count(arr);

    return 0;
}