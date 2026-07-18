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
    ListNode* mergeTwo(ListNode* root1 , ListNode* root2){
        if(!root1&&!root2) return NULL;
        if(!root1) return root2;
        if(!root2) return root1;
        ListNode* mergeHead = nullptr;
        ListNode* ptr1 = root1;
        ListNode* ptr2 = root2;
       
        if(ptr1->val>=ptr2->val){
            mergeHead = ptr2;
            ptr2=ptr2->next;
        }
        else {
            mergeHead = ptr1;
            ptr1=ptr1->next;
        }
         ListNode* mergePtr=mergeHead;
        while(ptr1&&ptr2){
            if(ptr1->val>=ptr2->val){
                mergePtr->next = ptr2;
                ptr2=ptr2->next;
                mergePtr=mergePtr->next;
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0) return nullptr;
        ListNode* result = nullptr;
        for(int i = 0 ; i<n;i++){
            if(lists[i]==nullptr) continue;
            if(result==nullptr) result = lists[i];
            else result = mergeTwo(result,lists[i]);
        }
        return result;
    }
};
