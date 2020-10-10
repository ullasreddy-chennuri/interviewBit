
//Evaluate the expression |A[i]-A[j]| + |i-j|  in all possibilities
// i.e., >0,>0 && >0,<0 && <0,>0 && <0,<0 and make a common expression 
// u will get the logic to find the solution..

int Solution::maxArr(vector<int> &A) {
    int n=A.size();
    int max_1 = INT_MIN;
    int max_2 = INT_MIN;
    int min_1 = INT_MAX;
    int min_2 = INT_MAX;
    
    for(int i=0;i<n;i++){
        max_1 = max(max_1,A[i]+i);
        max_2 = max(max_2,A[i]-i);
        min_1 = min(min_1,A[i]+i);
        min_2 = min(min_2,A[i]-i);
    }
    
    int maxy = max(max_1 - min_1,max_2 - min_2);
    
    return maxy;
}
