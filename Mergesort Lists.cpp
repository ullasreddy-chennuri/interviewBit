

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 ListNode* merge(ListNode* a, ListNode* b) {
    
    if(a==NULL){return b;}
    if(b==NULL){return a;}
    ListNode* c;    //new list header
    
    if(a->val<b->val){
        c=a;
        c->next=merge(a->next,b);
    }else{
        c=b;
        c->next=merge(a,b->next);
    }
    
    return c;
    
}
 
 ListNode* midpoint(ListNode* head){
     if(head==NULL or head->next==NULL){
         return head;
     }
     ListNode* slow=head;
     ListNode* fast=head->next;
     while(fast!=NULL and fast->next!=NULL){
         fast=fast->next->next;
         slow=slow->next;
     }
     
     return slow;
 }
 
 
ListNode* Solution::sortList(ListNode* a) {
    if(a==NULL or a->next==NULL){
        return a;
    }
    
    ListNode* mid = midpoint(a);    //dividing 
    
    ListNode* l=a;
    ListNode* m=mid->next;
    mid->next=NULL;
    
    // sorting recursive
    l=sortList(l);
    m=sortList(m);
    
    ListNode* c = merge(l,m);
    
    return c;
    
}
