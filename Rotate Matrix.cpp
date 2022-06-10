#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
     int fr=0,fc=0;
    while(fr<n-1 &&fc<m-1){
   
    int tmp=mat[fr][fc];
    for(int i=fr;i<n-1;i++){
        mat[i][fr]=mat[i+1][fr];
    }
    for(int i=fc;i<m-1;i++){
        mat[n-1][i]=mat[n-1][i+1];
    }
     for(int i=n-1;i>fr;i--){
        mat[i][m-1]=mat[i-1][m-1];
    }
     for(int i=m-1;i>fc;i--){
        mat[fr][i]=mat[fr][i-1];
    }
        mat[fr][fc+1]=tmp;
    m--;
    n--;
        fr++;
        fc++;
    }
    
    

}
