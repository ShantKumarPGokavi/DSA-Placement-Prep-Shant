Problem Link : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

Time Comp = O(N);
Space Comp = O(1);


#include <iostream>
#include <string>

using namespace std;

int NestingDepth(string s){
    
   int n = s.size();
   int cnt = 0;
   int maxDepth = 0;
   
   for(int i = 0; i < n; i++){
       if(s[i] == '('){
           cnt++;
           if(cnt > maxDepth){
               maxDepth++;
           }
       }
       if(s[i] == ')'){
           cnt--;
           if(cnt > maxDepth){
               maxDepth--;
           }
       }
   }
   
     return maxDepth;
}

int main()
{
   
   string s = "(1+(2*3)+((8)/4))+1";
   int result = NestingDepth(s);
   std::cout << result << " parentheses";
    return 0;
}



#include <iostream>
#include <string>

using namespace std;

int ValidAnagram(string s, string t){
    
   int n = s.size();
   int m = t.size();
  // int cnt = 0;
   int freq[26] = {0};
   
   for(int i = 0; i < n; i++){
       freq[s[i] - 'a']++;
   }
   
   for(int j = 0; j < m; j++){
      freq[t[j] - 'a']--;
   }
   
   if(s[i] == t[j]){
       freq;
   }
       
     return cnt;
}

int main()
{
   
   string s = "anagram";
   string t = "nagaram";
   int result = ValidAnagram(s,t);
   std::cout << result << " parentheses";
    return 0;
}