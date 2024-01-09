#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums){
            vector<int> original;
            vector<int> :: iterator iterat;
            for(iterat = nums.begin(); iterat != nums.end(); iterat++){
                int ele = *iterat;
                // if(find(original.begin(), original.end(), ele) != original. end()){
                if(find(original.begin(), original.end(), ele) != original.end()){
                    nums.erase(iterat);
                    iterat--;
                }
                else{
                    original.push_back(*iterat);
                }
            };
            return nums. size();
        };
};

int main() {
    
    Solution solution;
    vector<int> nums = {3,2,2,3};

    solution.removeDuplicates(nums);
  
}

/*
clang++ 0003_Remove_Duplicates_From_Sorted_Array.cpp -std=c++17 -o 0003_Remove_Duplicates_From_Sorted_Array.out


*/