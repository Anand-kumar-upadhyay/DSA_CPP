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
int ans=0;

pair<int,int> helper(TreeNode* root){

    if(root==NULL)return {0,0};

    auto l=helper(root->left);
    auto r=helper(root->right);

    int g=root->val+l.first+r.first;
    int c=1+l.second+r.second;
    if(g/c==root->val)ans++;



    return {g,c};
}
    int averageOfSubtree(TreeNode* root) {
       
       helper(root);

       return ans;
        
    }
};