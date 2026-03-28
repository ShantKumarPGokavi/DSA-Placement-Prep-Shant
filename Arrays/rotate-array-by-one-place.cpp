#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    
    if(n == 0){
        std::cout << "Nothing found";
        return 0;
    }
    
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    
    for(auto it : arr){
        std::cout << it << " ";
    }
    
    return 0;
}