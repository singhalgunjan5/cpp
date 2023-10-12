#include<iostream>
#include<vector>
using namespace std;
// space complexity O(N)
// time complexity O(N) + 2(E)
void dfs(vector<int>adj[],int start,vector<int>& vis)
{
    vis[val] = 1;
    cout<<start<<" ";
    for(auto val:adj[start])
    {
        if(vis[val] != -1)
        {
            
            dfs(adj,val,vis);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i = 0 ; i < m ; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>vis(n+1,-1);

    dfs(adj,1,vis);
}