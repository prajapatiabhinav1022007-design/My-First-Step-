#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int start=0;
    int sum=0;
    int ans=INT_MAX;
    for (int j=start;j<n;j++) {
        sum+=arr[j];
        while (sum>=k) {
            ans=min(ans,j-start+1);
            sum-=arr[start];
            start++;
        }
    }
}