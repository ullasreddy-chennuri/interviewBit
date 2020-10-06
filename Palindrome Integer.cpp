

int Solution::isPalindrome(int A) {
    
    if(A<0){
        return false;
    }
    vector<int> a;
    while(A!=0){
        int temp = A%10;
        a.push_back(temp);
        A=A/10;
    }
    
    int n=a.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }
    
    return true;
}
