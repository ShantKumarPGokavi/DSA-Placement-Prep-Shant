Problem Link : https://leetcode.com/problems/reverse-words-in-a-string/description/

Time Comp = O(N)
Space Comp = O(N)


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseString(string s){
    
    int n = s.size();
    string result = "";
    
    //Step 1 : Remove extra spaces
        for(int i = 0; i < n; i++){
            if(s[i] != ' '){
                result += s[i];
            }
            
            if(s[i] == ' ' && i > 0 && s[i-1] != ' '){
                result += s[i];
            }
        }
        
        if(result.back() == ' '){
              result.pop_back();
        }
    
         s = result;
         n = s.size();
         result = "";
    
    //Step 2 - Reverse the whole string
        int left = 0;
        int right = n-1;
        
      while(left < right){
         std::swap(s[left], s[right]);
         left++;
         right--;
       }
       
       
      //Step 3 - Reverse every word from the string
      int start = 0;
      
      for(int i = 0; i <= n; i++){
          int left = start;
          int right = i-1;
          
          if(s[i] == ' ' || i == n){
             while(left < right){
             std::swap(s[left], s[right]);
             left++;
             right--;
          }
             start = i+1;
        }
       }
       
       return s;
}

int main()
{
    
    string s = "a good   example";
    string result = reverseString(s);
    std::cout << result << " ";
    return 0;
}


"The while loop only reverses each word once, so across all iterations every character is touched exactly once — making it O(N) overall."