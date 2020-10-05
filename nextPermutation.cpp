

vector<int> Solution::nextPermutation(vector<int> &A) {
    int n=A.size();
    int i;
    for(i=n-1;i>0;i--){
        if(A[i]>A[i-1]){
            break;
        }
    }
    
    if(i==0){
        sort(A.begin(),A.end());
        return A;
    }
    
    int sm = i-1;
    int bg = i;
    int temp = bg;
    for(int i=n-1;i>bg;i--){
        if(A[i]>A[sm] && A[i]<A[temp]){
            temp = i;
        }
    }
    swap(A[temp],A[sm]);
    sm++;
    sort(A.begin()+sm,A.end());   
    
    return A;
}
