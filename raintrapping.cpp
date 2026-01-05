#include<bits/stdc++.h>
using namespace std;
 

int rain(vector<int>height,int k) {
    vector<int>ans(height.size(),0);
    ans[0]=height[0];
    //left max
    for (int i=1;i<height.size();i++) {
        ans[i]=max(ans[i-1],height[i]);
    }

    //right max
    vector<int>answ(height.size(),0);
    answ[0]=height[height.size()-1];
    for (int j=height.size()-2;j>=0;j--) {
        answ[j]=max(answ[j-1],height[j]);
    }
    reverse(answ.begin(),answ.end());
    int j;
    j=min(ans[k],answ[k])-height[k];

}


