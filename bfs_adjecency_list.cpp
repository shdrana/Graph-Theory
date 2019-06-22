#include <iostream>
#include <bits/stdc++.h>

/**
    Breadth First Search Algorithm using adjacency List
    @Author Sohid Ullah
    @Since 2019.08.15

    Total Number of adjacent: 6
    Time Complexity: O(V+E)

**/

using namespace std;

void bfsTraversal(vector<int > g[], int numberOfNode, int source)
{
    int i, visited[numberOfNode], v, level[numberOfNode];

    for(i = 0; i<numberOfNode; i++)
    {
        visited[i] = 0;
    }

    queue<int> q;
    q.push(source);

    visited[source] = 1;
    level[source] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        printf("%d ", u);
        for(v = 0; v<g[u].size(); v++)
        {
            int adjecentNodeofU = g[u][v];
            if(visited[adjecentNodeofU] == 0)
            {
                visited[adjecentNodeofU] = 1;
                level[adjecentNodeofU] = level[u]+1;
                q.push(adjecentNodeofU);
            }
        }
        cout<<endl;
    }
}


int main()
{
    vector<int > v[6];

    v[0].push_back(1);
    v[0].push_back(2);
    v[0].push_back(3);

    v[1].push_back(0);
    v[1].push_back(2);

    v[2].push_back(0);
    v[2].push_back(1);
    v[2].push_back(3);
    v[2].push_back(5);

    v[3].push_back(0);
    v[3].push_back(2);
    v[3].push_back(5);
    v[3].push_back(4);

    v[4].push_back(3);
    v[4].push_back(5);

    v[5].push_back(4);
    v[5].push_back(3);
    v[5].push_back(2);

    bfsTraversal(v, 6, 0);

    return 0;
}
