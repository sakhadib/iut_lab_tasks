#include<bits/stdc++.h>
#include "sgraph.h"
using namespace std;

void init(int arr[], int size, int val){
    for(int i=0; i<size; i++){
        arr[i] = val;
    }
}

bool bfs(Graph g, int source, int destination){
    queue<int> q;
    int level[100];

    init(level, 100, -1);

    q.push(source);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i=0; i<g.adj[u].size(); i++){
            int v = g.adj[u][i];

            if(v == destination){
                return true;
            }

            if(level[v] == -1){
                level[v] = 1;
                q.push(v);
            }
        }
    }

    return false;
}

int main(){

}