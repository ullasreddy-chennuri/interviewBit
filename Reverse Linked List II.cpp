

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    
    int c = 1;
    ListNode *temp = new ListNode(0);
    temp->next = A;
    ListNode* curr = temp,*next,*start,*end,*prev;
    
    while(c!=m){
        curr = curr->next;
        c++;
    }
    
    start=curr;
    end = curr->next;
    curr = curr->next;
    prev = NULL;
    
    while(c!= (n+1)){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		c++;
	}
	
	start->next = prev;
	end->next = curr;
    
    return temp->next;
    
}
