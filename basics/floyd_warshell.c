#include <stdio.h>
#include<limits.h>

void floydWarshall(vector<vector<int>> &dist)
{

    int v = dist.size();
    int INF = 1e8;
    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if (dist[i][k] != INF && dist[k][j] != INF)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main()
{

    int graph[v][v] = {

        {0, 1, 4, 0},
        {1, 0, 2, 5},
        {4, 2, 0, 1},
        {0, 5, 1, 0},

    };
    int dist[v];
    int visited[v];
    for(int i=0; i<v;i++){
        dist[i]=__INT8_MAX__;
        visited[i]=0;
    }

    dist[0]=0;


    //djkestra logic

    for(int count =0; count<v-1;count++){
        int min =__INT8_MAX__,u;

        for(int i=0;i<v;i++){
            if(visited[i]==0 &&dist[i]<min){
                min =dist[i];
                u=i;
            }
        }

        visited[u]=1;

        for(int s =0;s<v;s++){
            if(graph[u][v] !=0 && visited[v]==0){
                if(dist[u]+graph[u][v]<dist[v]){
                    dist[v]=dist[u]+graph[u][v];
                }
            }
        }
    }

    printf("Shortest distance from node 0:\n");

    for(int i=0; i<v; i++){
        printf("to %D = %d\n" , i, dist[i]);
    }

    return 0;
}