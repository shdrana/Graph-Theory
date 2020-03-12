#include <stdio.h>
#include <stdlib.h>
#define MAX_NODE 6

/**
    Breadth First Search Algorithm using adjacency Matrix
    @Author Sohid Ullah
    @Since 2019.08.15

    Total Number of Nodes: 6
    Time Complexity: O(V+E)

**/

int queue[MAX_NODE];
int front = 0;
int rear = 0;

void enqueue(int data)
{
    if (rear == MAX_NODE)
    {
        printf("Queue is full\n");
        return;
    }
    queue[rear++] = data;
}

int dequeue()
{
    if (front == MAX_NODE || front == rear)
    {
        printf("Queue is empty\n");
        return -1;
    }

    return queue[front++];
}

int isEmptyQueue()
{
    if (front == MAX_NODE || front == rear)
    {
        return 1;
    }
    else
        return 0;
}



void bfsTraversal(int graph[][6], int numberOfNode, int source)
{
    int i, visited[MAX_NODE], v, distance[MAX_NODE];

    for (i = 0; i < numberOfNode; i++)
    {
        visited[i] = 0;
    }

    visited[source] = 1;
    enqueue(source);
    distance[source] = 0;

    while (!isEmptyQueue())
    {
        int u = dequeue();
        printf("%d\n", u);

        for (v = 0; v < numberOfNode; v++)
        {
            if (graph[u][v] == 1 && visited[v] == 0)
            {
                visited[v] = 1;
                distance[v] = distance[u] + 1;
                enqueue(v);
            }
        }
    }
}

int main()
{
    /**
        Graph initialization. It is not mandatory to mention the number of rows.
    **/
    int graphStorage[][6] =
    {
        {0, 1, 1, 1, 0, 0},
        {1, 0, 1, 0, 0, 0},
        {1, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 1},
        {0, 0, 0, 1, 0, 1},
        {0, 0, 1, 1, 1, 0}
    };

    bfsTraversal(graphStorage, 6, 0);


    return 0;
}
