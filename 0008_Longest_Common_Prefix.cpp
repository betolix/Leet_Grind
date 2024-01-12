#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    // This solution sorts and the compares first and last element
    string longestCommonPrefix(vector<string>& strs) {

        // This solution sorts and then compares first vs last element.
        sort(strs.begin(), strs.end());
        int num_elements = strs.size();
        int min_element_size = strs[0].size();
        string first = strs[0];
        string  last= strs[num_elements-1];        
        string common_prefix="";
        if(strs[0]=="")return "";
        for (int i = 0; i < min_element_size; i++) {
            if (first[i] != last[i]) break;
            common_prefix+=first[i];
        }
        return common_prefix;
    }
};

int main() {
    Solution solution;
    vector<string> strs ={"flower","flower","flower","flower"};
    // vector<int> nums1 = {1,2,3,0,0,0};
    // vector<int> nums2 = {2,5,6};
    cout<<solution.longestCommonPrefix(strs);
    
}