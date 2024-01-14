#include <iostream>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle){
        return haystack.find(needle);
    };
};

int main(){

        Solution solution;
        string haystack = "xxxsadbutsad";
        string needle = "sad";
        int x = solution.strStr(haystack, needle);
        cout<<x<< endl;
        return x;
    };
/*
g++ 0009_Find_the_Index_of_the_First_Occurrence_in_a_String.cpp -o 0009_Find_the_Index_of_the_First_Occurrence_in_a_String.out
./0009_Find_the_Index_of_the_First_Occurrence_in_a_String.out
*/