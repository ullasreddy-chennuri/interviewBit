
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* reverse(ListNode *head){
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}


 
 
int Solution::lPalin(ListNode* head) {
    
    ListNode* t = head;
    int n=0;
    while(t->next!=NULL){
        t=t->next;
        n++;
    }

    int mid;
    if(n%2==0){
        mid = n/2;
    }else{
        mid = (n/2)+1;
    }
    ListNode *temp=head,*midhead = head,*revhead;
    for(int i=0;i<mid;i++){
        temp=midhead;
        midhead = midhead->next;
    }
    temp->next=NULL;
    revhead = reverse(midhead);
    while(head!=NULL && revhead!=NULL){
        if(head->val != revhead->val){
            return 0;
        }
        head=head->next;
        revhead = revhead->next;
    }
    return 1;
}
