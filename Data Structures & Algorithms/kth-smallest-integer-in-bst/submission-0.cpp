/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> InorderTraversal(TreeNode*root){
        if(!root) return {};
        vector<int> result = InorderTraversal(root->left);
        result.push_back(root->val);
        vector<int> temp = InorderTraversal(root->right);
        result.insert(result.end(),temp.begin(),temp.end());
        return result;
    }
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return -1;
        vector<int> array = InorderTraversal(root);
        int it = 0;
        while(it<k-1) it++;
        return array[it];
    }
};
