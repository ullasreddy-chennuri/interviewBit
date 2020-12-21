

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *temp = A;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    
    if(B>=c){
        A = A->next;
    }else{
        ListNode *tempo = A;
        int count = c-B;
        for(int i=0;i<count-1;i++){
            tempo = tempo->next;
        }
        
        tempo->next = tempo->next->next;
    }
    
    return A;
}
