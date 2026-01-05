#include<bits/stdc++.h>
using namespace std;

int run(int idx,vector<int>&ener,vector<int>&dp) {
    if (idx==0) {
        return 0;
    }
    if (dp[idx]!=-1) {
        return dp[idx];
    }
    int fs=run(idx-1,ener,dp)+(ener[idx]-ener[idx-1]);
    int ss=INT_MAX;
    if (idx>1) {
        ss=run(idx-2,ener,dp)+(ener[idx]-ener[idx-2]);
    }
    dp[idx]=min(fs,ss);
    return dp[idx];
}

int main () {
    int n;
    cin>>n;
    vector<int>ener(n);
    for (int i=0;i<n;i++) {
        cin>>ener[i];
    }
    vector<int>dp(n,-1);
    int ans=run(n-1,ener,dp);
}