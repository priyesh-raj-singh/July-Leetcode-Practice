
class Solution {
public:
    ListNode* reverse(ListNode* head){
         
         ListNode *p, *q;
    p=head, q=NULL;
    
    while(p!=NULL){
        ListNode *on=p->next;
        p->next=q;
        q=p;
        p=on;
    }
    return q;
    }
    
    ListNode *middle(ListNode* head){
    ListNode *slow, *fast;
    slow=head;
    fast=head->next;
    
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast->next!=NULL) fast=fast->next;
    }
    return slow;

    }
    int pairSum(ListNode* head) {
        ListNode *start = head;
        ListNode* mid = middle(head);
        ListNode * q = reverse(mid->next);
        mid->next = NULL;
        int ans = 0 ;
        while(start!=NULL and q!=NULL){
            ans = max(ans , start->val+q->val);
            start = start->next;
            q = q->next;
            
        }
        return ans;
        
    }
};