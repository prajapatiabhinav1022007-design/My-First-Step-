#include<bits/stdc++.h>
using namespace std;

vector<int>gcd(vector<int>&arr,int n) {
    int i=0;
    int j=n-1;
    while (i<=j && i<n) {
        if (arr[i]%2==0) {
            i++;
        }
        else {
            swap (arr[i],arr[j]);
            j--;
            continue;
        }
    }
    return arr;
}

int main () {
    int t; //no.of test cases
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        vector<int>ans=gcd(arr,n);
        int count =0;
        for (int k=0;k<n;k++) {
            if (ans[k]%2==0) {
                count=count + (n-(k+1));
            }
            else {
                for (int l=0;l<n;l++) {
                    for (int m=l+1;m<n;m++) {
                        if (ans[l]==ans[m]) {
                            count++;
                        }
                    }
                }
            }
        }
        cout<<count; 
    }
    return 0;
}