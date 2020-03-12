#include <iostream>
#include <vector>
#include <queue>
#define GREEN 1
#define RED 2
#define MAX_NODE 200
/**
	Breadth First Search Algorithm using adjacency graphStorage
	@Author Sohid Ullah
	@Since 2019.08.15

	Total Number of adjacent: 6
	Time Complexity: O(V+E)

**/

using namespace std;
int flag = 1;
void bfsTraversal(vector<int > graph[], int numberOfNode, int source)
{
	int i, visited[MAX_NODE], v;

	queue<int> bfsQueue;
	bfsQueue.push(source); //Pushing source as it is visited
	visited[source] = GREEN;

	while (!bfsQueue.empty())
	{
		int u = bfsQueue.front();
		bfsQueue.pop();
		for (v = 0; v < graph[u].size(); v++)
		{
			int adjecentNodeofU = graph[u][v];

			/**Checking if it is already visited or not. All visited nodes already are colored by green or red**/
			if (visited[adjecentNodeofU] == GREEN || visited[adjecentNodeofU] == RED)
			{
				if (visited[adjecentNodeofU] == visited[adjecentNodeofU])
				{
					flag = 0;
					return;
				}
			}
			/**If it is not visited color it using the opposite color of previous adjacent node color**/
			else
			{
				if (visited[u] == GREEN)
				{
					visited[adjecentNodeofU] = RED;
					bfsQueue.push(adjecentNodeofU);
				}
				else
				{
					visited[adjecentNodeofU] = RED;
					bfsQueue.push(adjecentNodeofU);
				}
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
	graphStorage[0].push_back(4);
	graphStorage[0].push_back(5);
	graphStorage[0].push_back(6);
	graphStorage[0].push_back(7);
	graphStorage[0].push_back(8);
	//v[0].push_back(2);

   // v[1].push_back(2);


	bfsTraversal(graphStorage, 9, 0);
	cout << flag << endl;
	return 0;
}
