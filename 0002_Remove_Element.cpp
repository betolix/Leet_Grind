#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:

    int removeElement(vector<int>& nums, int val) {
        vector<int> :: iterator it;
        it = nums.begin();
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val){
                nums.erase(it);
                it--;
                i--;
            }
            it++;
            }
            return nums.size();
    }   
};


int main() {
    
    Solution solution;
    vector<int> nums = {3,2,2,3};
    int val =3;

    solution.removeElement(nums, val);
    
    int size = nums.size();
    for(int x = 0; x <= size; x++){
        cout<<"nums1 "<<x<<" "<<nums[x]<<endl;
    }
}