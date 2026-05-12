Problem Link : https://leetcode.com/problems/valid-anagram/submissions/2001236295/


Time Comp = O(N)+O(N)+O(N);
Space comp = O(1);


#include <iostream>
#include <string>

using namespace std;

bool ValidAnagram(string s, string t){
    
   int n = s.size();
   int m = t.size();
  
   if(n != m) return 0;
  
   int freq[26] = {0};
   
   for(int i = 0; i < n; i++){
       freq[s[i] - 'a']++;
   }
   
   for(int j = 0; j < m; j++){
      freq[t[j] - 'a']--;
   }
   
   for(int k = 0; k < 26; k++){
       if(freq[k] != 0){
           return 0;
       }
   }
       return 1;
}

int main()
{
   
   string s = "anagram";
   string t = "nagaram";
   int result = ValidAnagram(s,t);
   std::cout << result;
    return 0;
}