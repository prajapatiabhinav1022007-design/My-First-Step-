#include<bits/stdc++.h>
using namespace std;




vector<int>f(int k,vector<int>&arr,int t){
    
    int h=0;
    if (k==0) {
        return arr;
    }
    for (auto m:arr) {
        h=max(m,h);
    }
    for (int l=0;l<t;l++) {
        arr[l]=h-arr[l];
    }
    return f(k-1,arr,t);
}


int main () {
    int n;//no. of test case
    cin>>n;
    while (n--) {
        int t;
        cin>>t;
        int k;
        cin>>k;
        vector<int>arr(t);
        int d=0;
        for (int i=0;i<t;i++) {
            cin>>arr[i];
        }
        if (k>=1&&t==1) {
            cout<<0;
        }
        int num=k%2;
        if (num==0) {
           arr=f(0,arr,t);
        }
        else{
            arr=f(1,arr,t);
        }
    }
    return 0;
}