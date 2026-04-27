Problem link ---> https://leetcode.com/problems/3sum/description/


Time Comp = O(N^3) + O(NlogN);
Space comp = O(N);

//Brute

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>>threeSum(vector<int>&arr){
    
    int n = arr.size();

    set<vector<int>>st;
    
    for(int i = 0; i < n; i++){
      for(int j = i+1; j < n; j++){
         for(int k = j+1; k < n; k++){
             
             if(arr[i] + arr[j] + arr[k] == 0){
                 
                  vector<int>temp = {arr[i], arr[j], arr[k]};
                  sort(temp.begin(), temp.end());
                  st.insert(temp);
                  
             }
         }
      }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
   
   vector<int>arr = {2,-2,0,3,-3,5};
   vector<vector<int>>result = threeSum(arr);
   
   for(auto it : result){
       std::cout << "[";
     for(auto idx : it) std::cout << idx << " ";
       std::cout << "]" << endl;
       
   }
 
    return 0;
}



Time Comp = O(N^2);
Space Comp = O(1); 
//Optimal

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>>threeSum(vector<int>&arr){
   
   vector<vector<int>>ans; //STore triplets
    int n = arr.size();
 
    sort(arr.begin(), arr.end());
     
    for(int i = 0; i < n; i++){
      
      if(i > 0 && arr[i] == arr[i-1]) continue;
      
      int j = i+1;
      int k = n-1;
      
      while(j < k){
          int sum = {arr[i] + arr[j] + arr[k]};
          
          if(sum < 0){
              j++;
          }
          else if(sum > 0){
              k--;
          }
          else {
             ans.push_back({arr[i], arr[j], arr[k]});
             j++;
             k--;
          }
          
          }
            
            //Verification
           while(j < k && arr[j] == arr[j-1]) j++;
           while(j < k && arr[k] == arr[k+1]) k--;
      }
      
        return ans;
    }

int main()
{
   
   vector<int>arr = {2,-2,0,3,-3,5};
   vector<vector<int>>result = threeSum(arr);
   
   for(auto it : result){
       std::cout << "[";
     for(auto idx : it) std::cout << idx << " ";
       std::cout << "]" << endl;
       
   }
 
    return 0;
}