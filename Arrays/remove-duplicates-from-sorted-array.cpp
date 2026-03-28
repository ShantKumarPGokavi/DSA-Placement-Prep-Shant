//Brute 
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    
    vector<int> arr = {1,1,1,2,2,3,3,4,4,5,6,6};
    int n = arr.size();
    
    set<int>st;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }
    
   int idx = 0;
    for(auto it : st){
      arr[idx] = it;
      idx++;
      cout << it << " ";
    }

    return 0;
}

//Optimized

#include <iostream>
#include <vector>

using namespace std;

int main() {

    if(n == 0){
        std::cout << "Nothing found";
        return 0; // Tells to stop the process
    }
    
    vector<int> arr = {1,1,1,2,2,3,3,4,4,5,6,6};
    int n = arr.size();
    
    int i = 0;
    for(int j = i+1; j < n; j++){
        if(arr[i] != arr[j]){
         i++;
        arr[i] = arr[j];
        }
    }
    
    for(int k = 0; k <= i; k++){
    std::cout << arr[k] << " ";
  }
 
    return 0;
}