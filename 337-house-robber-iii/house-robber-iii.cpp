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
pair<int,int>func(TreeNode* root)

{
    if(root==NULL)return {0,0};
    pair<int,int>l=func(root->left);
    pair<int,int>r=func(root->right);

    int take=root->val+r.second+l.second;
    int leave=max(l.first,l.second)+max(r.first,r.second);
    return {take,leave};
}
    int rob(TreeNode* root) {
        
        pair<int,int>p=func(root);
        return max(p.first,p.second);
        
    }
};