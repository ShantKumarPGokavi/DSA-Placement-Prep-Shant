//Brute
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    int n = arr.size();
    vector<int>temp;
    
    if(n == 0){
        std::cout << "Nothing found";
        return 0;
    }
    
    for(int i = 0; i < k; i++){
        temp.push_back(arr[i]);
    }
    for(int i = k; i < n; i++){
        arr[i-k] = arr[i];
    }
    for(int i = 0; i < k; i++){
        arr[n-k+i] = temp[i];
    }
    
    for(auto it : arr){
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
    
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    int n = arr.size();
    k = k % n;
    
    if(n == 0){
        std::cout << "Nothing found";
        return 0;
    }
    
    std::reverse(arr.begin(), arr.begin() + k);
    std::reverse(arr.begin()+k, arr.end());
    std::reverse(arr.begin(), arr.end());
    
    for(auto it : arr){
        std::cout << it << " ";
    }
    
    return 0;
}

