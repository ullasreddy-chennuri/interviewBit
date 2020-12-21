

int Solution::largestRectangleArea(vector<int> &A) {
    int n = A.size();
    stack<int>s;
    
    int max_area = 0;
    int tp;
    int area_top;
    
    int i=0;
    while(i<n){
        if(s.empty() || A[s.top()]<= A[i]){
            s.push(i++);
        }else{
            tp = s.top();
            s.pop();
            int temp;
            if(s.empty()){
                temp = i;
            }else{
                temp = i - s.top() - 1;
            }
            area_top = A[tp]*temp;
            if(max_area<area_top){
                max_area = area_top;
            }
        }
    }
    
    while(!s.empty()){
            tp = s.top();
            s.pop();
            int temp;
            if(s.empty()){
                temp = i;
            }else{
                temp = i - s.top() - 1;
            }
            area_top = A[tp]*temp;
            if(max_area<area_top){
                max_area = area_top;
            }
    }
    
    return max_area;
}
