#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int l;
        cin>>l;
        int r;
        cin>>r;
        vector<int>arr(n);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        vector<pair<int,int>>ans;
        for (int j=0;j<n-1;j++) {
            for (int k=j+1;k<n;k++) {
                int t=arr[j]+arr[k];
                if (t>=l&&t<=r) {
                    ans.push_back({arr[j],arr[k]});
                }
            }
        }
        for (auto h:ans) {
            cout<<h.first<<h.second<<endl;
        }
    }
    return 0;
}



//for (int i=0;i<n;i++)
//while (end>i)
// if (arr[end]+arr[i]>r<l)
//end--

