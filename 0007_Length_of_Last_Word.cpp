#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int size = s.length() - 1;
        int counter = 0;
        bool flag = 0;
        char c=' ';

        for (int i = size; i >= 0; i--)
        {
            //if ( s.charAt(i) != ' ')
            if (s[i] != 32){
                flag = 1;
                counter++;
            }
            //if (flag>0 && s.charAt(i) == ' ')
            if (flag>0 && s[i] == 32){
                //cout<<"WEEEE"<<s[i]<<"WEEEE"<<endl;
                break;
            }
        }
        return counter;
    }
};

int main()
{

    Solution solution;
    string str = "  fly me  to    the moon ";
    //string str = "moon o";
    //char str1[28] = "  fly me  to    the moon ";
    
    cout << "Length of last word is: " << solution.lengthOfLastWord(str)<<endl;

    string str1="  ";
    string str2="  ";
    char ccc=' ';
       
}

/*
g++ 0007_Length_of_Last_Word.cpp -o 0007_Length_of_Last_Word.out

*/
