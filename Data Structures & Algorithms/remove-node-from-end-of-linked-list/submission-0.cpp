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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return nullptr;
        int num=0;
        ListNode* dum = head;
        while(dum){
            num++;
            dum=dum->next;
        }
        if(n==num) return head->next;
        ListNode* curr = head;
        int count = 0;
        ListNode* dumdum = curr;
        while(count<num-n){
            dumdum=curr;
            curr=curr->next;
            count++;
        }
        if(curr->next==nullptr){
            dumdum->next = nullptr;
            return head;
        }
        else{
            dumdum->next = curr->next;
            curr->next = nullptr;
        }
        return head;
    }
};
