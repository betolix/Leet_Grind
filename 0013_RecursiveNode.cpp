#include <iostream>
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool printBackwards(ListNode *head) {
        if( head == NULL ) return false;
        printBackwards(head->next);
        std::cout<<head->val<<std::endl;
        return true;       
        
    }
};

int main() {
    
    Solution solution;
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    
    //head->next->next->next->next = head;
    solution.printBackwards(head);
    
}

/*
g++ 0001_Merge_Sorted_Array.cpp -o 0001_Merge_Sorted_Array.out

*/