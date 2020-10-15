

bool isPossible(vector<int> &a,long long int n,long long int k,long long int t,long long int mid){
	long long int painters_used = 1;
	long long int boards = 0;
	for(long long int i=0;i<n;i++){
		if(boards + a[i] > mid){
			painters_used++;
			boards = a[i];
			if(painters_used > k){
				return false;
			}
		}else{
			boards+=a[i];
		}

		if(a[i]>mid){
			return false;
		}
	}

	return true;
}

int Solution::paint(int A, int B, vector<int> &C) {
    long long int total_sum = 0;
    long long int n = C.size();
	for(int i=0;i<n;i++){
		total_sum = total_sum%10000003 + C[i]%10000003;
	}
	
	long long int s=0,e = total_sum*B;
    long long int ans = e%10000003;
	while(s<=e){
		long long int mid = (s+e)/2;
		if(isPossible(C,n,A,B,mid/B)){
			ans = mid%10000003;	
			e=mid-1;
		}else{
			s=mid+1;
		}
	}

	ans = ans%10000003;

	return ans;
}
