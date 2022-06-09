#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int m=matrix.size();
    int n=matrix[0].size();
    vector<pair<int,int>>zind;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          if(matrix[i][j]==0){
              pair<int,int>p;
              p.first=i;
              p.second=j;
              zind.push_back(p);
          }
        }
    }
    for(int i=0;i<zind.size();i++){
        int x=zind[i].first;
        int y=zind[i].second;
        for(int k=0;k<n;k++){
            matrix[x][k]=0;
        }
        for(int k=0;k<m;k++){
            matrix[k][y]=0;
        }
    }
    
//     second approach
//     bool col = false, row = false;

   

//    int n = matrix.size(), m = matrix[0].size();

   

//    for(int i = 0 ; i < n ; i++)

//    {

//        for(int j = 0 ; j < m ; j++)

//        {

//            if(matrix[i][j] == 0)

//            {

//                if(j == 0) col = true;

//                if(i == 0) row = true;    

//                matrix[0][j] = 0;

//                matrix[i][0] = 0;

//            }

//        }

//    }

   

//    for(int i = 1 ; i < n ; i++)

//    {

//        for(int j = 1 ; j < m ; j++)

//        {

//            if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;

//        }

//    }

   

//    if(col){

//        for(int i = 0 ; i < n ; i++) matrix[i][0] = 0;

//    }

//    if(row){

//        for(int i = 0 ; i < m ; i++) matrix[0][i] = 0;

//    }
}
