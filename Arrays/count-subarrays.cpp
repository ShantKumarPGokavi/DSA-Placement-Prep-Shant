Problem link --> https://leetcode.com/problems/subarray-sum-equals-k/description/

//Brute
Time Comp = O(N^2);
Space Comp = O(1);
#include <iostream>
#include <vector>

using namespace std;

int countSubarray(vector<int>&arr){
    
   int n = arr.size();
   int k = 6;
   int cnt = 0;
   
  for(int i = 0; i < n; i++){
      int sum = 0;
    for(int j = i; j < n; j++){
      sum = sum + arr[j];
      if(sum == k){
        cnt++;
      }
    }
  }
  return cnt; 
}

int main()
{
   vector<int>arr = {1,2,3,6,7,8,5,1,3,3};
   std::cout << "Total Subarrays" << countSubarray(arr);

    return 0;
}


//Optimized

Time Comp = O(N);
Space Comp = O(1);

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countSubarrays(vector<int>&arr){
    
    int n = arr.size();
    int k = 3;
    int cnt = 0;
    
    unordered_map<int,int>mpp;
   
    mpp[0] = 1;
    
   for(int i = 0; i < n; i++){
     
     //Find the prefixSum
     int prefixSum = prefixSum + arr[i];
     
     //Find the target
     int target = prefixSum - k;
     
     //If I get my target in the map then increase the count
     if(mpp.find(target) != mpp.end()){
        cnt += mpp[target];
     }
     
     //Update the map
        mpp[prefixSum] ++;
   }
   
   return cnt;
}

int main() {
    
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1};
    std::cout << "Total number of subarrays : " <<  countSubarrays(arr);
    return 0;
}