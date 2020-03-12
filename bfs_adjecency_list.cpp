//#include <bits/stdc++.h>
#include <iostream>
#include <iostream>
#include <vector>
#include <queue>
#define MAX_NODE 6

/**
	Breadth First Search Algorithm using adjacency List
	@Author Sohid Ullah
	@Since 2019.08.15

	Total Number of adjacent: 6
	Time Complexity: O(V+E)

**/

using namespace std;

void bfsTraversal(vector<int > graph[], int numberOfNode, int source)
{
	int i, visited[MAX_NODE], v, level[MAX_NODE];

	for (i = 0; i < numberOfNode; i++)
	{
		visited[i] = 0;
	}

	queue<int> bfsQueue;
	bfsQueue.push(source);
	visited[source] = 1;
	level[source] = 0;

	while (!bfsQueue.empty())
	{
		int u = bfsQueue.front();
		bfsQueue.pop();
		printf("%d ", u);
		for (v = 0; v < graph[u].size(); v++)
		{
			int adjecentNodeofU = graph[u][v];
			if (visited[adjecentNodeofU] == 0)
			{
				visited[adjecentNodeofU] = 1;
				level[adjecentNodeofU] = level[u] + 1;
				bfsQueue.push(adjecentNodeofU);
			}
		}
	}
}


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

	bfsTraversal(graphStorage, 6, 0);

	return 0;
}
