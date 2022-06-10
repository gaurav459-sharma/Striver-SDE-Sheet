#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxprofit=0;
    int n=prices.size();
    int min=prices[0];
    for(int i=1;i<n;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        else if(prices[i]-min>maxprofit){
            maxprofit=prices[i]-min;
        }
        
   }
    return maxprofit;
}
