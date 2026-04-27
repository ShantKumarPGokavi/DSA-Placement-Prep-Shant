Problem link ---> https://leetcode.com/problems/4sum/description/


Time Comp = O(N^4) + O(NlogN);
Space Comp = O(N);

//Brute

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>>fourSum(vector<int>&arr, int target){
    
    int n = arr.size();
    set<vector<int>>st;
    
    for(int i = 0; i < n; i++){
      for(int j = i+1; j < n; j++){
         for(int k = j+1; k < n; k++){
            for(int q = k+1; q < n; q++){
             
             long long sum = {arr[i]+arr[j]+arr[k]+arr[q]};
             if(sum == target){
                 vector<int>temp = {arr[i], arr[j], arr[k], arr[q]};
                 sort(temp.begin(), temp.end());
                 st.insert(temp);
             }
          }
       }
    }
 }
    
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

int main()
{
    
    vector<int>arr = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>>result = fourSum(arr, target);
    
    
    for(auto it : result){
        std::cout << "[";
      for(auto x : it){
         std::cout << x << " ";
      }
         std::cout << "]" << endl;
    }
    
    return 0;
}


Time comp = {outer} N * {inner} * N {pointers} *N = O(N^3)
Space comp = O(1);

//Optimized

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>>fourSum(vector<int>&arr, int target){
    
    int n = arr.size();
    
    vector<vector<int>>ans;
    
    sort(arr.begin(), arr.end());
    
    if(n < 4){
        return {};
    }
    
    for(int i = 0; i < n; i++){
     for(int j = i+1; j < n; j++){
         
         if(i > 0 && arr[i] == arr[i-1]) continue;
         if(j > 0 && arr[j] == arr[j-1]) continue;
         
         int left = j+1;
         int right = n-1;
         
         while(left < right){
         long long sum = (long long) arr[i] + arr[j] + arr[left] + arr[right];
         
         if(sum < target){
             left++;
         }
         else if(sum > target){
             right--;
         }
         else{
             ans.push_back({arr[i], arr[j], arr[left], arr[right]});
             left++;
             right--;
         
         while(left < right && arr[left] == arr[left-1]) left++;
         while(left < right && arr[right] == arr[right+1]) right--;
         
        }
      }
    }
  }
    
    return ans;
    
}

int main()
{
    
    vector<int>arr = {-2,-1,-1,1,1,2,2};
    int target = 0;
    vector<vector<int>>result = fourSum(arr, target);
    
    
    for(auto it : result){
        std::cout << "[";
      for(auto x : it){
         std::cout << x << " ";
      }
         std::cout << "]" << endl;
    }
    
    return 0;
}