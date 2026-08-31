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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
    {
        vector<int>ans;
        int f=-1;
        int s=-1;
        int mf=-1;
        int ms=-1;
        int m=INT_MAX;
        ListNode* a=head;
        ListNode* b=head->next;;
        ListNode* c=head->next->next;
        if(c==NULL)return{-1,-1};
        int i=0;
        while(c)
        {
            if(b->val>a->val&&b->val>c->val||b->val<a->val&&b->val<c->val)
            {
                if(f==-1)f=i;
                else s=i;

                mf=ms;
                ms=i;
                if(mf!=-1)
                {
                int d=ms-mf;
                m=min(m,d);

                }
            }
            i++;
            a=a->next;
            b=b->next;
            c=c->next;
        }
        
        if(s==-1)return {-1,-1};
        
        
        
        ans.push_back(m);
        ans.push_back(s-f);
  return ans;  }
};