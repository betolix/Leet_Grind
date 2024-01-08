#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m-1, j = n-1, index = m+n-1;

            while( i >= 0 && j >= 0 ){
                if(nums1[i] >= nums2[j]){
                    nums1[index--] = nums1[i--];
                }
                else{
                    nums1[index--] = nums2[j--];
                }
            }
            while(j>=0){
                nums1[index--] = nums2[j--];
            }
    }
};


int main() {
    
    Solution solution;
    vector<int> nums1 = {2,0};
    vector<int> nums2 = {1};
    // vector<int> nums1 = {1,2,3,0,0,0};
    // vector<int> nums2 = {2,5,6};
    solution.merge(nums1, /*nums1.size()*/1, nums2, nums2.size());
    int size = nums1.size();
    for(int x = 0; x <= size; x++){
        cout<<"nums1 "<<x<<" "<<nums1[x]<<endl;
    }
}

