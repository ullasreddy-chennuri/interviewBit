

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void sortInsert(ListNode* &sorted,ListNode *newnode){

	ListNode *curr;
	if(sorted == NULL || sorted->val >= newnode->val ){
		newnode->next =  sorted;
		sorted = newnode;
	}else{
		curr = sorted;
		while( curr->next != NULL && curr->next->val < newnode->val){
			curr = curr->next;
		}
		newnode->next = curr->next;
		curr->next = newnode;
	}
}

ListNode* Solution::insertionSortList(ListNode* head) {
	ListNode *sorted = NULL;
	ListNode* curr = head;
	while(curr!=NULL){
		ListNode *ne = curr->next;
		sortInsert(sorted,curr);
		curr = ne;
	}
	head = sorted;
	
	return head;
}
