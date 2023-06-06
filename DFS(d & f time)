#include<stdio.h>
#include<iostream>
using namespace std;
int graph[10][10] = {0}, visited[10] = {0},d[10] = {0},f[10] = {0},prev[10],n,m,time = 0,i = 1,k = 1;
//
void dfs(int node){


    d[i++] = ++time;


    cout << node << " ";
    visited[node] = 1;

    for(int j = 1;j <= n;j++){
        if(graph[node][j] && !visited[j])
                dfs(j);

    }

    f[k++] = ++time;


}

int main(){

    cout << " enter num of vertex and edges: " ;
    cin >> n >> m;

    for(int i = 0; i < m ;i++){
        int u,v;
        cin >> u >> v;
        graph[u][v] = graph[v][u] = 1;

    }

    for(int i = 1;i <= n;i++){

        if(!visited[i]){

            dfs(i);
        }
    }

    cout << "discovering time : " ;
    for(int i = 1;i  <= n;i++)
        cout << d[i] << " ";
    cout << endl;

    cout << "finishing time : " ;
    for(int i = 1;i  <= n;i++)
        cout << f[i] << " ";
    cout << endl;


return 0;

}
