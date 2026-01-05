#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int ans;
        int i=1;
        int h;
        int j;
        if (n==1) {
            ans=0;
        }
        else if (n>k) {
            ans=k;
        }
        else {
            h=n-i;
            if (h==1) {
                j=k-((k/h)*h);
                ans=((k/h)*n)+j;
                ans=ans-1;
            }
            else {
                j=k-((k/h)*h);
                ans=((k/h)*n)+j;
            }
        }
    cout<<ans;
    }
    return 0;
}