

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int findIndex(vector<int> &inorder, int i, int j, int val)
{
    for (auto b = i; b<=j; ++b)
        if (inorder[b]==val)
            return b;
}
 
 TreeNode* makeTree(vector<int> &pre,vector<int> &in,int s,int e,int& i){
    //   static int i=0;
        if(s>e){
            return NULL;
        }
        //recursive calls
        TreeNode* root = new TreeNode(pre[i++]);
        if(s==e){
            return root;
        }
        
        int idx = findIndex(in,s,e,root->val);
        root->left = makeTree(pre,in,s,idx-1,i);
        root->right = makeTree(pre,in,idx+1,e,i);
        return root;
}
     
 
 
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &in) {
    if(pre.empty()||in.empty()){
        return NULL;
    }
    int i=0;
    return makeTree(pre,in,0,in.size()-1,i);
    
}
