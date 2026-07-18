/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1&&!list2) return nullptr;
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode* ptr1 = list1;
        ListNode*ptr2 = list2;
        ListNode* mergeHead;
        if(ptr1->val > ptr2->val){
            mergeHead = ptr2;
            ptr2=ptr2->next;
        }
        else{
            mergeHead = ptr1;
            ptr1=ptr1->next;
        }
        ListNode* mergePtr = mergeHead;
        while(ptr1&&ptr2){
            if(ptr1->val >= ptr2->val){
                mergePtr->next = ptr2;
                mergePtr=mergePtr->next;
                ptr2=ptr2->next;
            }
            else{
                mergePtr->next = ptr1;
                mergePtr = mergePtr->next;
                ptr1=ptr1->next;
            }
        }
        if(ptr1) mergePtr->next = ptr1;
        if(ptr2) mergePtr->next = ptr2;
        return mergeHead;
    }
};
