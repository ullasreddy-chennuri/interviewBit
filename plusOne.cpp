vector<int> Solution::plusOne(vector<int> &A) {
    int carry=0;
    int n=A.size();
    if(n==1){
        if(A[0]+1>=10){
            A[n-1]=(A[n-1]+1)%10;
            A.insert(A.begin(),1);
        }else{
            A[0]=A[0]+1;
        }
        
        return A;
    }
    if(A[n-1]+1>=10){
        A[n-1]=(A[n-1]+1)%10;
        carry = 1;
        for(int i=n-2;i>0;i--){
            if(A[i]+carry > 9){
                A[i]=(A[i]+carry)%10;
                carry=1;
            }else{
                A[i]=A[i]+carry;
                carry=0;
                break;
            }
        }
    }else{
        A[n-1]=A[n-1]+1;
    }
    
    A[0]=A[0]+carry;
    for(int i=0;i<n;i++){
        if(A[0]==0){
            A.erase(A.begin());
        }else{
            break;
        }
    }
    
    if(A[0]>9){
        int temp=A[0]/10;
        A[0]=A[0]%10;
        A.insert(A.begin(),temp);
    }
    return A;
}
