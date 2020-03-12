#include <iostream>
#include<vector>
#include<queue>
#define MAX_NODE 6
//#include <bits/stdc++.h>

/**
	Graph Store using adjacency List
	@Author Sohid Ullah
	@Since 2019.06.18

**/

using namespace std;

int main()
{
	vector<int > graphStorage[MAX_NODE];

	graphStorage[0].push_back(1);
	graphStorage[0].push_back(2);
	graphStorage[0].push_back(3);

	graphStorage[1].push_back(0);
	graphStorage[1].push_back(2);

	graphStorage[2].push_back(0);
	graphStorage[2].push_back(1);
	graphStorage[2].push_back(3);
	graphStorage[2].push_back(5);

	graphStorage[3].push_back(0);
	graphStorage[3].push_back(2);
	graphStorage[3].push_back(5);
	graphStorage[3].push_back(4);

	graphStorage[4].push_back(3);
	graphStorage[4].push_back(5);

	graphStorage[5].push_back(4);
	graphStorage[5].push_back(3);
	graphStorage[5].push_back(2);
	/*See the connected edge of every node*/

	for(int node = 0; node<6; node++)
	{
		cout<<node<<"->";
		for(int vertex = 0; vertex< graphStorage[node].size(); vertex++)
		{
			cout<< graphStorage[node][vertex]<<" ";
		}
		cout<<endl;
	}




	return 0;
}
