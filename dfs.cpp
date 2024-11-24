#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int> ans,vector<int> vis,vector<vector<int>> adj){
    vis[node]=1;
    ans.push_back(node);

    for(auto &it:adj[node]){
        if(!vis[node]){
            dfs(it,ans,vis,adj);
        }
    }
}

int main()  {
    int V;cin>>V;
vector<int> vis(V,0);vector<int> ans;
vector<vector<int>> adj;
vis[0]=1;
dfs(0,ans,vis,adj);
return 0;
}
