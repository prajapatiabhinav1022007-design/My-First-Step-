////////////////////////////BFS
#include<bits/stdc++.h>
using namespace std;

class graph {
    void bfs(int v,vector<vector<int>>adj[],int vis[],int k) {
        for (int i=0;i<v;i++){
            vis[i]=0;
        }
        vis[k]=1;
        queue<int>q;
        vector<int>ans;
        q.push(k);
        while(!q.empty()) {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto j:adj[node]) {
                if (vis[j]==0) {
                    vis[j]=1;
                    q.push(j);
                }
            }
        }
    }










    bool detectcycle(int k,int v,vector<vector<int>adj[],int vis[]) {
        for (int i=0;i>v;i++) {
            vis[i]=0;
        }
        vis[k]=1;
        queue<pair<int,int>>q;
        
        q.push({k,-1});
        while(!q.empty()) {
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for (auto j:adj[node]) {
                if (vis[j]==0) {
                    vis[j]=1;
                    q.push({j,node});
                }
                int pri=j.first();
                int sec=j.second();
                else if(j!=parernt) {
                    return true;
                }

            }
        }
        
    }
















    bool isbipartite(vector<vector<int,int>>adj[],int v,int c[]) {
        for (int i=0;i<v;i++) {
            c[i]=-1;
        }
        queue<int>q;
        for (int j=0;j<v;j++) {
            if (c[j]==-1) {
                c[j]=0;
                q.push(j);
            }
            while (!q.empty()) {
                int node=q.front();
                q.pop();
                for (auto l:adj[node]) {
                    if (c[l]==-1) {
                        c[l]=1-c[node];
                        q.push(l);
                    }
                    else if (c[l]==c[node]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};






///////////////////////////////////////DFS
bool iscycle(vector<vector<int>>&adj,int parent,vector<bool>&vis) {
    vis[parent]=true;
    for (auto i:adj[parent]) {
        if (!vis[i]) {
            if(iscycle(adj,i,vis)) {
                return true;
            }


            else if (i!=parent) {
                return true;
            }
        }
    }
    return false;
}


bool dfs(vector<vector<int>>adj[],int v) {
    vector<bool>vis(v,false);
    for (int i=0;i<v;i++) {
        if (!vis[i]) {
           if(iscycle(adj,i,vis)) {
            return true;
           }
        }
    }
    return false;
}



////////for directed graph













