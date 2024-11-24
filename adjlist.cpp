#include<bits/stdc++.h>
using namespace std;

int main()  {
cout<<"Enter the number of nodes and edges: "<<endl;
int n,m;

cin>>n>>m;

vector<vector<int>>adj(n+1);

for(int i=0;i<m;i++){
    int u,v;
    cout<<"Enter the value of the u and v: "<<endl;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);

}
for(int i=1;i<m;i++){
    cout<<i<<"-->";
    for(int j=0;i<adj[i].size();j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}