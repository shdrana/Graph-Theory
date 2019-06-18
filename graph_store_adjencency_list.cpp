#include <iostream>
#include <bits/stdc++.h>

/**
    Graph Store using adjacency List
    @Author Sohid Ullah
    @Since 2019.08.18

**/

using namespace std;

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


    for(int node = 0; node<6; node++)
    {
        cout<<node<<"->";
        for(int vertex = 0; vertex<v[node].size(); vertex++)
        {
            cout<<v[node][vertex]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
