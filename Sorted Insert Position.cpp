


int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int s=0;
    int e=A.size();
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(A[mid]==B){
            ans = mid;
            return ans;
        }else if(A[mid]>B){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    
    return ans;
    
}

