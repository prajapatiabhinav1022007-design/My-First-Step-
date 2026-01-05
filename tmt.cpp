#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        s.resize(n);
        for (int i=0;i<n;i++) {
            cin>>s[i];
        }
        int t=0;
        int m=0;
        for (auto i:s) {
            if (i=='t') {
                t++;
            }
            else {
                m++;
            }
        }
        if (t==0 && m==0) {
            cout<<"no";
        }
        else if (t==2*m) {
            cout<<"yes";
        }
        else {
            cout<<"no";
        }
    }
    return 0;
}