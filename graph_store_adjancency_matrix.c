#include <stdio.h>
#include <stdlib.h>
#define MAX 20

/**
    Graph store using adjacency Matrix
    @Author Sohid Ullah
    @Since 2019.08.18

**/


int main()
{
    /* Graph initialization */
    int graph[6][6] =
    {
        {0, 1, 1, 1, 0, 0},
        {1, 0, 1, 0, 0, 0},
        {1, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 1},
        {0, 0, 0, 1, 0, 1},
        {0, 0, 1, 1, 1, 0}
    };

    /*Showing connected edge with every node*/
    int node, vertex;
    for(node = 0; node<6; node++)
    {
        printf("%d->", node);
        for(vertex = 0; vertex<6; vertex++)
        {
            if(graph[node][vertex] == 1)
            {
                printf("%d ", vertex);
            }
        }
        printf("\n");
    }


    return 0;
}
