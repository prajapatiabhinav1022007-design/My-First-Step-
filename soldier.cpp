#include<bits/stdc++.h>
using namespace std;

int main () {
    int k; //starting price
    cin>>k;
    int t;//money he have
    cin>>t;
    int h;//no of banana
    cin>>h;
    int sum=0;
    for (int i=1;i<=h;i++) {
        sum=sum+k*i;
    }
    if (sum>t) {
        cout<<(sum-t);
    }
    else {
        cout<<0;
    }
    return 0;
}