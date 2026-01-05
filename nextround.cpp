#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    int k;
    cin>>k;
    vector<int>arr(t);
    for(int i=0;i<t;i++) {
        cin>>arr[i];
    }
    int count=0;
    for (auto j:arr) {
        if (j>k) {
            count++;
        }
    }
    if (count==0) {
        cout<<0;
    }
    else{
        cout<<count;
    }
    return 0;
}