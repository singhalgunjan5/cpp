#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(vector<int>adj[],int start,vector<int>&vis)
{
    queue<int>q;
    q.push(start);
    vis[start] = 1;
    while(!q.empty())
    {
        int node = q.front();
        cout<<node<<" ";
        
        q.pop();
        for(auto val:adj[node])
        {
            if(vis[val] != 1)
            {
                q.push(val);
                vis[val] = 1;
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n >> m;
    vector<int> adj[n+1];
    for(int i = 0 ; i < m ; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>vis(n+1,-1);
    bfs(adj,1,vis);



}