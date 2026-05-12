Problem Link: https://leetcode.com/problems/longest-common-prefix/submissions/2001304300/


Time Comp = O(N^2);
Space comp = O(N);


#include <iostream>
#include <string>
#include <vector>

using namespace std;

string LongestCommonPrefix(vector<string> strs){
   
    string result = "";
    
    for(int i = 0; i < strs[0].size(); i++){
     for(int j = 1; j < strs.size(); j++){
         
       if(strs[j][i] != strs[0][i]){
           return result;
       }
     }
     
       result += strs[0][i];
    }
      return result;
}

int main()
{
   
   vector<string> strs = {"flower", "flow", "flight"};
   
   string ress = LongestCommonPrefix(strs);
   std::cout << ress << " ";
    return 0;
}
