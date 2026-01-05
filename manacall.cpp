#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>ans;
        vector<int>arr(n);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        vector<int>j(n);
        for (int k=0;k<n;k++) {
            cin>>j[k];
        }
        int sum=0;
        for (int i=0;i<n;i++) {
            if (j[i]==1) {
                ans.push_back(1);
            }
            else {
                int end;
                int t;
                t=arr[i]-j[i]+1;
                if (i==0) {
                    end=t;
                    for (int m=t;m<=arr[i];m++) {
                        sum+=1;
                        ans.push_back(sum);
                    }
                }
                else if (t>arr[i-1]&&j[i-1]!=1) {
                    sum=0;
                    for (int p;p<=arr[i];p++) {
                        sum+=1;
                        ans.push_back(sum);
                    }
                }
                else {
                    for (int k=arr[i-1];k<arr[i];k++) {
                        sum+=1;
                        ans.push_back(sum);
                    }
                }
            }
        }
        int l=0;
        for (int i=0;i<ans.size();i++) {
            l=l+ans[i];
        }
        cout<<l;
    }
    return 0;
}