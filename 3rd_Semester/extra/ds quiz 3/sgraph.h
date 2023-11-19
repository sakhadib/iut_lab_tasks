#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    int v;
    vector<int> *adj;
    
        Graph(int v){
            this->v = v;
            adj = new vector<int>[v];
        }
        void addEdge(int u, int v){
            adj[u].push_back(v);
            adj[v].push_back(u); // undirected graph
        }

        void printGraph(){
            for(int i=0; i<v; i++){
                cout<<i<<"->";
                for(int j=0; j<adj[i].size(); j++){
                    cout << adj[i][j] <<" ";
                }
                cout<<endl;
            }
        }
};