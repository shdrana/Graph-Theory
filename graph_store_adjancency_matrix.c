#include <stdio.h>
#include <stdlib.h>
#define MAX 20

/**
    Graph store using adjacency Matrix
    @Author Sohid Ullah
    @Since 2019.06.18

**/

int main()
{
    /* Graph initialization. Check Wiki page to see the graph */
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
    int node, edge;
    for(node = 0; node<6; node++)
    {
        printf("%d->", node);
        for(edge = 0; edge<6; edge++)
        {
            if(graph[node][edge] == 1)
            {
                printf("%d ", edge);
            }
        }
        printf("\n");
    }


    return 0;
}
