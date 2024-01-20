#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
               end--;
           }
       }
       return true;
    }
};

int main() {
    Solution solution;
    string strs = "A man, a plan, a canal: Panama";
    cout<<solution.isPalindrome(strs);
    
}


/*
BETTER APPROACH FROM LEET -> EVALUATE AND DISCUSS

class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] <= 'z' && s[i] >= 'a')
            {
                a.push_back(s[i]);
            }
            else if(s[i] <= 'Z' && s[i] >= 'A')
            {
                a.push_back(s[i] + 32);
            }
            else if(s[i] <= '9' && s[i] >= '0')
            {
                a.push_back(s[i] + 32);
            }
        }
        int n = a.length() - 1;
        if(n == 0 || n == -1) return 1;
        for(int i = 0; i < a.length() / 2 + 1; i++)
        {
            if(a[i] != a[n - i]) return 0;
        }
        return 1;
    }
};

*/