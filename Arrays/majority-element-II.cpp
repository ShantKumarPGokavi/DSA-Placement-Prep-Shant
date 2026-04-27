Problem Link ---> https://leetcode.com/problems/majority-element-ii/description/

Time Comp = O(N);
Space Comp = O(N);

//Brute

#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

vector<int> majEleII(vector<int>&arr){
    
    int n = arr.size();
    
    unordered_map<int,int>mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    
    vector<int>result;
    for(auto it : mpp){
        int ele = it.first;
        int count = it.second;
        
        if(count >= n/3){
            result.push_back(ele);
        }
    }
  
    return result;
}

int main()
{
    
    vector<int>arr = {3,2,1,3,2,2,3};
    vector<int>answer = majEleII(arr);
    
    for(auto it : answer){
       std::cout << "The maximum repeating number : " << it << '\n';
    }
    
    return 0;
}


Time Comp = O(N);
Space Comp = O(1);

// Optimized

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> majEleII(vector<int>&arr){
    
    int n = arr.size();
    
    if(arr.empty()){
        return {};
    }

    //Identification
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;
    int count1 = 0;
    int count2 = 0;
    
    for(int i = 0; i < n; i++){
        if(count1 > 0 && ele1 == arr[i]){
            count1++;
        }
        else if(count2 > 0 && ele2 == arr[i]){
            count2++;
        }
        else if(count1 == 0 && ele2 != arr[i]){
            ele1 = arr[i];
            count1 = 1;
        }
        else if(count2 == 0 && ele1 != arr[i]){
            ele2 = arr[i];
            count2 = 1;
        }
        else{
            count1--;
            count2--;
        }
    }
    
    
    //Verification 
    vector<int>result;
    int actualCnt1 = 0;
    int actualCnt2 = 0;
    
    for(auto it : arr){
        if(ele1 == it){
            actualCnt1++;
        }
        if(ele2 == it){
            actualCnt2++;
        }
    }
    
    if(actualCnt1 > n/3){
        result.push_back(ele1);
    }
    if(actualCnt2 > n/3){
        result.push_back(ele2);
    }
    
    return result;
}

int main()
{
    
    vector<int>arr = {3,2,1,3,2,2,3};
    vector<int>answer = majEleII(arr);
    
    for(auto it : answer){
        std::cout << "The maximum repeating number : " << it << '\n';
    }
    
    return 0;
}