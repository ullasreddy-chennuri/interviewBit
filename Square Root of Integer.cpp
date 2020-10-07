


int Solution::sqrt(int n) {
    long long int s=0;
    long long int e=n;
    long long int ans = -1;
    while(s<=e){
        long long int mid = (s+e)/2;
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    
    return ans;
}
