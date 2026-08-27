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

    int ans=0;

    int func(TreeNode* root)
    {
        if(root==NULL)return 0;

        int l=func(root->left);
        int r=func(root->right);

        if(root->val>=max(l,r))
        {
            ans++;
            return root->val;

        }
        return max(l,r);
        
    }
public:
    int countDominantNodes(TreeNode* root) {

        func(root);
        return ans;

    }
};