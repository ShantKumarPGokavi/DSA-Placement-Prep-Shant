//Brute
#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

void majority(vector<int>&arr){
    int n = arr.size();
    
    unordered_map<int,int>mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    int max_freq = 0;
    int most_appeared = INT_MIN;
    for(auto it : mpp){
        if(it.second > max_freq){
            max_freq = it.second;
            most_appeared = it.first;
        }
    }
    std::cout << most_appeared << " has appeared " << max_freq << " times ";
}

int main() {
    
    vector<int>arr = {1,4,2,4,4,3,4,2,7,4};
    majority(arr);

    return 0;
}


//Optimized

#include <iostream>
#include <vector>

using namespace std;

void majority(vector<int>&arr){
    int n = arr.size();
    
    int current_king = 0;
    int army = 0;
    
  for(int i = 0; i < n; i++){
      if(army == 0){
          current_king = arr[i];
          army = 1;
      }
      else if(current_king == arr[i]){
          army++;
      }
      else{
          army--;
      }
  }
  std::cout << current_king << " is the majority element";
}

int main()
{
   vector<int>arr = {7, 0, 0, 1, 7, 7, 2, 7, 7};
   if(arr.empty()){
       std::cout << "Array is empty!!!";
       return 0;
   }
     majority(arr);
     return 0;
    
}