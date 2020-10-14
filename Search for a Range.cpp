

int upper_b(const vector<int> &a,int n,int k){
int s=0;
int e=n-1;
int ans=-1;
while(s<=e){
	int mid=(s+e)/2;
	if(a[mid]==k){
		ans=mid;
		s=mid+1;
	}else if(a[mid]>k){
		e=mid-1;
	}else{
		s=mid+1;
	}
}
return ans;
}


int lower_b(const vector<int> &a,int n,int k){
int s=0;
int e=n-1;
int ans=-1;
while(s<=e){
	int mid=(s+e)/2;
	if(a[mid]==k){
		ans=mid;
		e=mid-1;
	}else if(a[mid]>k){
		e=mid-1;
	}else{
		s=mid+1;
	}
}
return ans;
}


vector<int> Solution::searchRange(const vector<int> &A, int B) {
    
    int n= A.size();
    int i = lower_b(A,n,B);
    vector<int> arr;
    arr.push_back(i);
    int j = upper_b(A,n,B);
    arr.push_back(j);
    
    return arr;
}
