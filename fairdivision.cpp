#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int count1=0;
        int count2=0;
        string ans;
        for (int j=0;j<n;j++) {
            if (arr[j]==1) {
                count1++;
            }
            else {
                count2++;
            }
        }
        if (count1==count2) {
            if (count1==1 && count2==1) {
                ans="no";
            }
            else {
                ans="yes";
            }
        }
        else {
            if ((count1==0)||(count2==0)) {
                if ((count1%2==0)&&(count2%2==0)) {
                    ans="yes";
                }
                else {
                    ans="no";
                }
            }
            else {
                if (count1==2*count2) {
                    ans="yes";
                }
                else {
                    ans="no";
                }
            }
        }
    cout<<ans;
    }
    return 0;
}
