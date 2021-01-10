

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void printRightView(TreeNode* root,int level,int &max_level,vector<int> &B){
    
     if(root==NULL){
         return;
     }
     if(max_level<level){
         B.push_back(root->val);
         max_level=level;
     }
     
     printRightView(root->right,level+1,max_level,B);
     printRightView(root->left,level+1,max_level,B);
 }
 
 
vector<int> Solution::solve(TreeNode* A) {
    vector<int> B;
    int max_level=-1;
    printRightView(A,0,max_level,B);
    return B;
}
