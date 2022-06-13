#include <bits/stdc++.h> 

int arr[15][15];
int helper(int i,int j,int m,int n){
    if(i==m||j==n){
        return 0;
    }
    if(i==m-1 && j==n-1){
        return 1;
    }
    if(arr[i][j]!=-1){
        return arr[i][j];
    }

    return arr[i][j]=helper(i,j+1,m,n)+helper(i+1,j,m,n);
}

int uniquePaths(int m, int n) {
	// Write your code here.
    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            arr[i][j]=-1;
        }
    }
    return helper(0,0,m,n);
}
