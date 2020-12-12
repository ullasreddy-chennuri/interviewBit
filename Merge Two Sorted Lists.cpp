
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b) {
    
    if(a==NULL){return b;}
    if(b==NULL){return a;}
    ListNode* c;    //new list header
    
    if(a->val<b->val){
        c=a;
        c->next=mergeTwoLists(a->next,b);
    }else{
        c=b;
        c->next=mergeTwoLists(a,b->next);
    }
    
    return c;
    
}
