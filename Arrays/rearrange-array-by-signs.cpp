
#include <iostream>
#include <vector>

using namespace std;

void rearrange(vector<int>&arr){
    int n = arr.size();
    int posIdx = 0;
    int negIdx = 1;
    
    int ans[n] = {};
    
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            ans[posIdx] = arr[i];
            posIdx+=2;
        }
        else{
           ans[negIdx] = arr[i];
           negIdx+=2;
        }
    }
    for(auto it : ans){
        std::cout << it << " ";
    }
    
}    

int main()
{
   
    vector<int>arr = {2,4,5,-1,-3,-4}; 
    if(arr.empty()){
        std::cout << "Array is empty";
        return 0;
    }
    rearrage(arr);
   
    return 0;
}


