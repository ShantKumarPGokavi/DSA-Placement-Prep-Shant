//Brute
#include <iostream>
#include <vector>
#include <climits>
#include <set>

using namespace std;

void longestConsecutive(vector<int>arr){
    int n = arr.size();
    int streak = 0;
    int longest = 0;
    int last_num = INT_MIN;
    
    std::set<int>st;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }
    
    for(int it : st){
        if(it == last_num+1){
            streak++;
        }
        else{
            streak = 1;
        }
        last_num = it;
        longest = max(longest, streak);
    }
    std::cout << longest << " is the longest consecutive number";
    
}

int main()
{
    vector<int>arr = {1,4,22,3,5,2,19};
    if(arr.empty()){
        std::cout << "Array is empty";
    }
    longestConsecutive(arr);
     return 0;
}




//Optimal

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_set>

using namespace std;

void longestConsecutive(vector<int>arr){
    int n = arr.size(); 
    int longest = 0;
    
    std::unordered_set<int>st;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }
    
    for(auto it : st){
       if(st.find(it-1) == st.end()){
           int cnt = 1;
           int current = it;
       
       //Count the sequence
       while(st.find(current+1) != st.end()){
           current = current + 1;
           cnt = cnt + 1;
       }
      longest = max(longest,cnt);
    }
  }
    std::cout << longest << " is the longest consecutive number";
  } 

int main()
{
    vector<int>arr = {1,4,22,3,5,2,19};
    if(arr.empty()){
        std::cout << "Array is empty";
    }
    longestConsecutive(arr);
     return 0;
}


