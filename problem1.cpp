#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    int n;
    int k;
    for (int i=1;i<=num;i++) {
        cin>>n>>k;
        vector<long long>a(n);
        int sum=0;
        for (int j=0;j<n;j++) {
            cin>>a[j];
        }
        for (int l=0;l<n;l+2) {
            sum+=abs(a[l+1]-a[l]);
        }
        int diff=min(k,sum);
        cout<<sum-diff;
    }
    return 0;
}