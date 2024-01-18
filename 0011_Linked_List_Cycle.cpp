
#include <iostream>
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        ListNode* fast = head->next;
        ListNode* slow = head;
        while( fast != NULL && fast->next != NULL && slow != NULL ){
            if(fast == slow){
                return true;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        return false;       
        
    }
};


int main() {
    
    Solution solution;
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    //head->next->next->next->next = head;
    if(solution.hasCycle(head)){
        std::cout<<"Cycle = true"<<std::endl;
    }else{
        std::cout<<"Cycle = false"<<std::endl;
    }
    
}

/*
g++ 0001_Merge_Sorted_Array.cpp -o 0001_Merge_Sorted_Array.out

*/



 