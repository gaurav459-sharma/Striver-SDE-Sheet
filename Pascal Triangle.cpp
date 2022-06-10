#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>>res;
    res.push_back({1});
    for(int i=1;i<n;i++){
        vector<long long int>v(i+1);
        for(int j=0;j<i+1;j++){
            if(j==0 ||j==i){
                v[j]=1;
            }
            else{
                v[j]=res[i-1][j]+res[i-1][j-1];
            }
        }
        res.push_back(v);
    }
    return res;
}
