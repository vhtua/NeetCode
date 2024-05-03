#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list = new ListNode();
        ListNode* itr = list; 
        
        if (!list1) {
            return list2;
        }
        if (!list2) {
            return list1;
        }


        while (list1 && list2) {
            if (list1->val <= list2->val) {
                itr->next = list1;
                list1 = list1->next;
            } else {
                itr->next = list2;
                list2 = list2->next;   
            }
            itr = itr->next;
        }

        if (!list1) {
            itr->next = list2;
        }
        if (!list2) {
            itr->next = list1;
        }
        
        return list->next;
    }
};