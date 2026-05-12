Problem Link : https://leetcode.com/problems/remove-outermost-parentheses/submissions/2000305667/

Time Comp = O(N);
Space Comp = O(N);


#include <iostream>
#include <string>

using namespace std;

string RemoveParentheses(string s){
    
   int n = s.size();
   int cnt = 0;
   string result = "";
   
   for(int i = 0; i < n; i++){
       if(s[i] == '('){
         if(cnt > 0){
           result += s[i];
         }
           cnt++;
       }
       
       if(s[i] == ')'){
           cnt--;
         if(cnt > 0){
             result += s[i];
           }
       }
   }
   
     return result;
}

int main()
{
   
   string s = "(()())(())";
   string ress = RemoveParentheses(s);
   std::cout << ress << " ";
    return 0;
}