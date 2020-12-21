

int Solution::solve(string A) {
    stack<char> s;
    for(int i=0;A[i]!='\0';i++){
        char ch = A[i];
        if(ch == '('){
            s.push(ch);
        }else if(ch == ')'){
            if(s.empty() or s.top()!='('){
                return 0;
            }
            s.pop();
        }
    }
    
    if(s.empty()){
        return 1;
    }else{
        return 0;
    }
}
