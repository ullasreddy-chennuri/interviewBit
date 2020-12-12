

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 
ListNode* Solution::detectCycle(ListNode* a) {
    
    if(a==NULL or a->next==NULL){
        return NULL;
    }
    
     ListNode* slow=a;
     ListNode* fast=a;
     
     while(slow!=NULL and fast!=NULL and fast->next!=NULL){
         fast=fast->next->next;
         slow=slow->next;
         if(fast==slow){
             break;
         }
     }
     
     if(fast==NULL or slow==NULL or fast->next==NULL){
         return NULL;
     }
     
     ListNode* c = a;
     
     while(c!=slow){
         c=c->next;
         slow=slow->next;
     }
    return c;
}
