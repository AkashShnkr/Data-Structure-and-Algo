#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of vertices (n) and edges (m):" << endl;
    int n, m;
    cin >> n >> m;

    // Using an unordered map to store the adjacency list
    unordered_map<int, vector<int>> adj;

    // Input the edges
    for (int i = 0; i < m; i++)
    {
        cout << "Enter the directed edge from u to v:" << endl;
        int u, v;
        cin >> u >> v;

        // Add the edge from u to v
        adj[u].push_back(v);
    }

    // Output the adjacency list (the graph)
    cout << "The graph's adjacency list is:" << endl;

    // Traverse and print the adjacency list
    for (auto &it : adj)
    {
        cout << it.first << " -> ";
        for (int i = 0; i < it.second.size(); i++)
        {
            cout << it.second[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
