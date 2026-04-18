
 
class Solution {
public:

void func(TreeNode* root, long long t,int &c)
{
    if(root==NULL)return;
    if((long long)root->val==t)
    {
        c++;
    }
    func(root->left,t-root->val,c);
    func(root->right,t-root->val,c);
}
    int pathSum(TreeNode* root, int t) {
    if(root==NULL)return 0;
    int c=0;
    func(root,(long long)t,c);
    c+=pathSum(root->left,t)+pathSum(root->right,t);
    return c;
     

    }
};