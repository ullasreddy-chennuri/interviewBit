


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 class HBpair{
     public:
        int h;
        bool bal;
 };
 
 HBpair isHeightBal(TreeNode* root){
     HBpair p;
     if(root==NULL){
         p.h=0;
         p.bal=true;
         return p;
     }
     
     HBpair left = isHeightBal(root->left);
     HBpair right = isHeightBal(root->right);
     
     p.h = max(left.h,right.h)+1;
     if(abs(left.h-right.h)<=1 && left.bal && right.bal){
         p.bal=true;
     }else{
         p.bal=false;
     }
     
     return p;
 }
int Solution::isBalanced(TreeNode* A) {
    
    HBpair k = isHeightBal(A);
    
    if(k.bal){
        return 1;
    }else{
        return 0;
    }
    
}
