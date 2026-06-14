 class Solution {
public:
ListNode* reverse(ListNode* head) {
        ListNode*curr=head;
        ListNode*next=NULL;
        ListNode*prev=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
 }
        
   return prev; }

    int pairSum(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        temp=head;

        int k=n/2;
        for(int i=1;i<k;i++)
        {

           temp=temp->next;
        }
       ListNode* ans=reverse(temp->next) ;
       ListNode*a=head;
       ListNode*b=ans;
       int maxd=INT_MIN;
       int sum=0;

       while(a!=NULL &&b!=NULL){
         sum=a->val+b->val;
         maxd=max(maxd,sum);
         a=a->next;
         b=b->next;

       }

        
   return maxd; }
};