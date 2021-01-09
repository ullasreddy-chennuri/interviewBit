

string Solution::solve(string A) {
    queue<char> q;
    string B="";
    int freq[27]={0};
    int i=0;
    int len = A.length()-1;
    while(i<=len){
        q.push(A[i]);
        freq[A[i]-'a']++;
        while(!q.empty()){
            int ele = q.front()-'a';
            if(freq[ele]>1){
                q.pop();
            }else{
                B+=q.front();
                break;
            }
        }
        if(q.empty()){
            B+="#";
        }
        i++;
    }
    
    return B;
}
