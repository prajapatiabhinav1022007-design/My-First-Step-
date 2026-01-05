#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int j=0;j<n;j++) {
            cin>>arr[j];
        }

        int s=0;
        for (int i=0;i<n;i++) {
            for (int k=i+1;k<n;k++) {
                s=s|(arr[i]&arr[k]);
            }
        }
    cout<<s;
    }
}