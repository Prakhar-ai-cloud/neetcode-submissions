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
    bool hasCycle(ListNode* head) {
        if (!head || !head->next) return false;

        ListNode* dumdum = head;
        ListNode* dum = head;   

        while (dumdum && dumdum->next) {
            dum = dum->next;               
            dumdum = dumdum->next->next;  

            if (dum == dumdum) {
                return true;
            }
        }
        return false; 
    }
};

