#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int subseqstr_size = s.size();
        int fullstr_size = t.size();
        int s_index =0;

        if(s==""&&t=="")return true;
        for(int i=0;i<fullstr_size;i++){
            if(s[s_index] == t[i] && 1){
                s_index++;
            }
            if(s_index == subseqstr_size){
                return true;
            }
        }
        return false;
    }
};


int main() {
    
    Solution solution;
    string s = "abc";
    string t = "ahbgdc";
  
    
    if(solution.isSubsequence(s,t)){
        cout<<"Si es SUBSEQUENCE"<<endl;
    } else{
        cout<<"No es SUBSEQUENCE"<<endl;
    }
    
}

/*
g++ 0001_Merge_Sorted_Array.cpp -o 0001_Merge_Sorted_Array.out
*/