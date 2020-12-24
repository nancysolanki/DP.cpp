
#include <bits/stdc++.h> 
using namespace std; 
  
int knapSackRec(int W, int wt[],  
                int val[], int i, 
                int** dp) 
{ 
    // base condition 
    if (i < 0) 
        return 0; 
    if (dp[i][W] != -1) 
        return dp[i][W]; 
  
    if (wt[i] > W) { 
  
       
       
        dp[i][W] = knapSackRec(W, wt,  
                               val, i - 1,  
                               dp); 
        return dp[i][W]; 
    } 
    else { 
        // Store value in a table before return 
        dp[i][W] = max(val[i] 
                      + knapSackRec(W - wt[i],  
                                   wt, val, 
                                   i - 1, dp), 
                       knapSackRec(W, wt, val,  
                                   i - 1, dp)); 
  
       
        return dp[i][W]; 
    } 
} 
  
