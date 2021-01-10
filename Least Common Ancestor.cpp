


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 TreeNode* search(TreeNode* a,int x){
     if(!a){
         return NULL;
     }
     if(a->val == x){
         return a;
     }
     
     TreeNode* lft = search(a->left,x);
     TreeNode* rgt = search(a->right,x);
     
     return (lft)?lft:rgt;  //returning left or right node by comparing
 }
 
 TreeNode* llccaa(TreeNode* A,int B,int C){
     if(A==NULL){
        return NULL;
    }
    if(A->val == B || A->val==C){
        return A;
    }
    
    TreeNode* leftans = llccaa(A->left,B,C);
    TreeNode* rightans = llccaa(A->right,B,C);
    
    if(leftans!=NULL and rightans!=NULL){
        return A;
    }
    if(leftans!=NULL){
        return leftans;
    }
    
    return rightans;
 }
 
 
 
int Solution::lca(TreeNode* A, int B, int C) {
    if(!search(A,B)||!search(A,C)){
        return -1;
    }
    
    return llccaa(A,B,C)->val;
}
