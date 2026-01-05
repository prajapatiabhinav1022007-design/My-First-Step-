#include<bits/stdc++.h>
using namespace std;

int sol(int a,int b,int c) {
    if ((a==1&&b==1)||(b==1&&c==1)||(c==1&&a==1)) {
        return 1;
    }
    return 0;
}
int main () {
    int n;
    cin>>n;
    int j;
    int k;
    int l;
    int ans=0;
    for (int i=1;i<=n;++i) {
        cin>>j>>k>>l;
        int count=sol(j,k,l);
        if (count==1) {
            ans+=1;
        }
    }
    cout<<ans;
    return 0;
}