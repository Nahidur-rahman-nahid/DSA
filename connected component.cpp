#include<stdio.h>
int vertex = 6,edge = 5;
int visited[6] = {0};
int graph[6][6];


void dfs(int node){
      visited[node] = 1;
      printf("%d  ",node);
      for(int j = 0;j < vertex;j++){

            if(graph[node][j] && !visited[j]){
                dfs(j);
            }
      }

}

int main(){

    printf( "enter the edges: " );
    for(int i = 0;i < edge;i++){
        int u,v;
        scanf("%d %d",&u,&v);

        graph[u][v] = 1;
        graph[v][u] = 1;

    }
    int cnt = 0;

    for(int i = 0;i < vertex;i++){

        if(!visited[i]){
                printf("\nconnected component:%d ",cnt+1);
                dfs(i);
                cnt++;

        }
    }
    printf("\ncount : %d",cnt);




return 0;
}
