#include <bits/stdc++.h>

using namespace std;

#define MAXN 100000
#define GREY 1
#define BLACK 2

vector< int > G[MAXN];

int dfsTime = 0;
int mark[MAXN];
int d[MAXN];
int f[MAXN];

void DFS(int u)
{
    dfsTime = dfsTime + 1;
    d[u] = dfsTime;
    mark[u] = 1;

    for(int i = 0; i<(int)G[u].size(); i++)
    {
        int v = G[u][i];
        if(mark[v] == 0)
        {
            DFS(v);
        }
    }
    mark[u] = 2;
    dfsTime = dfsTime + 1;
    f[u] = dfsTime;
}
int main()
{

    int n, e;
    cin>>n>>e;
    for(int i = 0; i < e; i++)
    {
        int u, v;
        cin>>u>>v;
        G[u].push_back(v);
    }

    for(int i=1; i<=n; i++)
    {
        //cout<<"Out: "+ i<<endl;
        if(mark[i] == 0)
        {
            //cout<<"In: "+ i<<endl;
            DFS(i);
        }
    }

    for(int i = 1; i <=n; i++)
    {
        cout<<i<<" -> "<<d[i]<<" "<<f[i]<<endl;
    }

    return 0;
}
