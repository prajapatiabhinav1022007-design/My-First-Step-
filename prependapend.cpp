#include<bits/stdc++.h>
using namespace std;


int ans(string s,int start,int end,int count) {
    if (start>=end) {
        return count;
    }
    if (s[start]=='0' && s[end]=='1') {
        start++;
        end--;
        count++;
    }
    else if (s[start]=='1' && s[end]=='0') {
        start++;
        end--;
        count++;
    }
    else {
        return count;
    }
    return ans(s,start,end,count);
} 

int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int k=ans(s,0,s.size()-1,0);
        cout<<s.size()-2*k;
        cout<<"\n";
    }
    return 0;
}