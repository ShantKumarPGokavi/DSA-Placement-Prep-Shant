#include <iostream>
#include <vector>

using namespace std;

void maximum_profit(vector<int>&arr){
    int n = arr.size();
    
    int max_profit = 0;
    int min_price = arr[0];
    
    for(int i = 0; i < n; i++){
        
        if(arr[i] < min_price){
            min_price = arr[i];
        }
        
        //Lets calculate the current price 
        int current_price = arr[i] - min_price;
          if(current_price > max_profit){
              max_profit = current_price;
          }
    }
    std::cout << max_profit << " is the maximum profit";
}    

int main()
{
   
    vector<int>arr = {10, 7, 5, 8, 11, 9};
    if(arr.empty()){
        std::cout << "Array is empty";
        return 0;
    }
    maximum_profit(arr);
   
    return 0;
}