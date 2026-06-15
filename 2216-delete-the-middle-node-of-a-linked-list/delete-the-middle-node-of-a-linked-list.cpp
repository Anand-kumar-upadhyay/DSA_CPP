
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        

         ListNode* slow = head;
        ListNode* fast = head;
        ListNode*temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        if(n==1) return NULL;
        temp=head;

        int idx=0;
        while (fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
            idx++;
            
    }
    
    
    for(int i=1;i<=idx-1;i++){
        temp=temp->next;

    }
    temp->next=temp->next->next;
    
    
        
    return head;}
};