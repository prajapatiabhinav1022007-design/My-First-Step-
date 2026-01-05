#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;//no of people
    cin>>n;
    int k;//fence height
    cin>>k;
    vector<int>arr(n);
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int sum=0;
    for (auto j:arr) {
        if (j>k) {
            sum+=2;
        }
        else {
            sum+=1;
        }
    }
    cout<<sum;
    return 0;
}