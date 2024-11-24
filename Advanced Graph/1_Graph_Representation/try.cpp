#include<bits/stdc++.h>
using namespace std;


int main()  {
int n,m;
cin>>n>>m;
queue<int> q;
q.push(0);
vector<int> ans;
vector<int> vis(n,0);
vis[0]=1;
vector<vector<int>> adj;
while(!q.empty()){
    int node=q.front();
    q.pop();
    
    ans.push_back(node);

    for(auto &it:adj[node]){
        if(!vis[it]){
            q.push(it);

        }
    }

}    
return ans;
}