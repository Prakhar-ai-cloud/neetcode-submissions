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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long sum1 = 0;
        long long sum2 = 0;
 
        ListNode* mergeHead = nullptr;
        ListNode*curr1 = l1;
        ListNode*curr2=l2;

       long long place = 1;
    while (curr1) {
        sum1 += curr1->val * place;
        place *= 10;
        curr1 = curr1->next;
    }
        long long place2 = 1;
        while(curr2){
            sum2 += curr2->val *place2;
            place2*=10;
            curr2=curr2->next;
        }
        long long final_sum = sum1+sum2;
        if (final_sum == 0) return new ListNode(0);
        vector<int> arr;
        while(final_sum>0){
            int a=final_sum%10;
            arr.push_back(a);
            final_sum=final_sum/10;
        }
        ListNode* merge= new ListNode(0);
        ListNode*dummy = merge;
        int n=arr.size();
        for(int i=0;i<n;i++){
            ListNode* temp = new ListNode(arr[i]);
            dummy->next= temp;
            dummy=dummy->next;
        }
        return merge->next;
    }
};