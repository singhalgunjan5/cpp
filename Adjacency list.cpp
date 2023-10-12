#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // n are no. of nodes
    // m are no. of edges
    int n;
    int m;
    cin>>n >> m;
    vector<int> adj[n+1];
    for(int i = 0 ; i < m ; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(auto val:adj)
    {
        for(auto vale : val)cout<<vale<<" ";
        cout<<endl;
    }
//space complexity is O(2E) for the creation of list
}