#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n , m;
    // n is no. of nodes
    // m is no. of edges
    cin>>n;
    cin>>m;
    vector<vector<int> >adj(n+1,vector<int>(m+1,-1));
    for(int i = 0 ; i < m ; i++)
    {
        int u , v;
        cin >>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
        
    }
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= m ; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    //space == O(n^2);
  
}