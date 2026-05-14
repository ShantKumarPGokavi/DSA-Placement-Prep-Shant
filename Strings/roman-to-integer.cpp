Problem Link : https://leetcode.com/problems/roman-to-integer/submissions/2002697798/


Time Comp = O(N);
Space comp = O(N);


#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int romanToInt(string s){
   
   int sum = 0;
   int n = s.size();
   
   unordered_map<char,int>roman;
   roman['I'] = 1;
   roman['V'] = 5;
   roman['X'] = 10;
   roman['L'] = 50;
   roman['C'] = 100;
   roman['D'] = 500;
   roman['M'] = 1000;
   
   for(int i = 0; i < n; i++){
       if(i < n-1 && roman[s[i]] < roman[s[i+1]]){
           sum -= roman[s[i]];
       }
       else
           sum += roman[s[i]];
       }
    
      return sum;
       
}

int main()
{
    string s = "IV";
    int sum = romanToInt(s);
    std::cout << "The number is : " << sum << endl;

    return 0;
}