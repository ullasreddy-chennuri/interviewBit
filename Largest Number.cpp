


int myComp(string X,string Y){
    string XY = X.append(Y);
    string YX = Y.append(X);
    
    return XY.compare(YX)>0?1:0;
}



string Solution::largestNumber(const vector<int> &A) {
    vector<string> s;
    for(int i=0;i<A.size();i++){
        s.push_back(to_string(A[i]));
    }
    
    sort(s.begin(),s.end(),myComp);
    
    string answer="";
    for(int i=0;i<s.size();i++){
        answer+=s[i];
    }
    
    int i=0;
    while(answer[i]=='0'){
        i++;
    }
    if(i==answer.length()){
        answer="0";
    }
    return answer;
}

