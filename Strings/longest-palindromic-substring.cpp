Problem link: https://leetcode.com/problems/longest-palindromic-substring/description/


Time Comp = O(N^3)
Space Comp = O(N)

//Brute 

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string longestPalindrome(string s){
    
    int n = s.size();
    string result = "";
    string original = "";
    
    for(int i = 0; i < n; i++){
      for(int j = i; j < n; j++){
           string sub = "";
        for(int k = i; k < j; k++){
            sub += s[k];
        }
        original = sub;
        
        int left = 0;
        int right = sub.size()-1;
        
        while(left < right){
            std::swap(sub[left],sub[right]);
            left++;
            right--;
        }
         
         if(sub == original && sub.size() > result.size()){
             result = original;
         }
       }
       
     }
      return result;
       
}

int main()
{
    string s = "adcxcde";
    string super = longestPalindrome(s);
    std::cout << "The substring is : " << super << "  " << endl;

    return 0;
}



Time Comp = O(N^2);
Space Comp = O(1);

//Optimized

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string longestPalindrome(string s){
    
    int n = s.size();
    string result = "";
    
// Odd Palindrome
    for(int i = 0; i < n; i++){
    int left = i;
    int right = i; 
    
    while(left >= 0 && right < n && s[left] == s[right]){
        
     string current = s.substr(left, right - left + 1);
      if(current.size() > result.size()){
           result = current;
      }
        left--;
        right++;
    }
}    

 // Even Palindrome
    for(int i = 0; i < n; i++){
    int left = i;
    int right = i+1; 
    
    while(left >= 0 && right < n && s[left] == s[right]){
        
     string current = s.substr(left, right - left + 1);
      if(current.size() > result.size()){
           result = current;
      }
        left--;
        right++;
    }
}
      return result;
       
}

int main()
{
    string s = "cbbd";
    string super = longestPalindrome(s);
    std::cout << "The substring is : " << super << "  " << endl;

    return 0;
}