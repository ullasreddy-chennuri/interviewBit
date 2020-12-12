
int Solution::solve(ListNode* A, int B) {
    ListNode* temp = A;
    int N=1;
    while(temp->next!=NULL){
        temp=temp->next;
        N++;
    }
    int req = (N/2)+1 - B;
    
    if(req<=0){
        return -1;
    }
    
    temp = A;
    int c = 1;
    while(temp){
        if(c==req){
            return temp->val;
        }
         c++;
        temp=temp->next;
    }    
}
