


vector<vector<int> > Solution::generateMatrix(int A) {
    int n=A;
    int startRow=0;
    int startCol=0;
    int endRow=n-1;
    int endCol=n-1;
    
    vector<vector<int> > a(n,vector<int> (n));
    int count = 1;

    while(startRow<=endRow && startCol<=endCol){

        //Top row
        for(int i=startCol;i<=endCol;i++){
            
           a[startRow][i]=count;
           count++;
        }
        startRow++;

        for(int i=startRow;i<=endRow;i++){
            
            a[i][endCol]=count;
            count++;
        }
        endCol--;

        if(endCol>=startCol){
            for(int i=endCol;i>=startCol;i--){
               
                a[endRow][i]=count;
                 count++;
            }
            endRow--;
        }

        if(endRow>=startRow){
            for(int i=endRow;i>=startRow;i--){
               
                a[i][startCol]=count;
                 count++;
            }
            startCol++;
        }

    }
    
    return a;
}
