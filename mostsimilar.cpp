#include<bits/stdc++.h>
using namespace std;

int main () {
    map<char,int>mp;
    string s="abcdefghijklmnopqrstuvwxyz";
    for (auto i:s) {
        mp[i]=i-'a';
    }
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<string>v;
        while (n--) {
            string sn;
            sn.resize(k);
            for (int i=0;i<k;i++) {
                cin>>sn[i];
            }
            v.push_back(sn);
        }
        int m=INT_MAX;
        for (int i=0;i<v.size()-1;i++) {     ////we can do it without using map as char is stored as ascii(integer)
            int sum=0;
            for (int j=i+1;j<v.size();j++) {
                for (int l=0;l<k;l++) {
                    sum=sum+abs(mp[v[i][l]]-mp[v[j][l]]);
                }
            }
            m=min(m,sum);
        }
        cout<<m;
        cout<<"\n";
    }
    return 0;
}
