#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    
    vector<int>arr = {2,4,6,7,12,13};
    int n = arr.size();
    int target = 9;
    
    unordered_map <int, int>mpp;
    
    for(int i = 0; i < n; i++){
        int complement = target - arr[i];
        if(mpp.find(complement) != mpp.end()){
            std::cout << "Indices : " << mpp[complement] << " " << i;
        }
        mpp[arr[i]] = i;
    }

    return 0;
}