#include<iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

const int N=1e5;
const int INF=1e9+10;

int parent[N];
int size[N];

void make(int v)
{
    parent[v]=v;
    size[v]=1;
}

int find(int v)
{
    if(v==parent[v]) return v;
    return parent[v]=find(parent[v]); //PATH COMPRESSION OPERATION
}

void Union(int a,int b) 
{
    a=find(a);
    b=find(b);

    if(a!=b)
    {
        if(size[a]<size[b]) {swap(a,b);}
        parent[b]=a;
        size[a]+=size[b];
    }
}

vector<vector<int>>cc;
vector<int>current_cc;

void dfs(int cur,vector<vector<int>>&adj,vector<int>&vis)
{
    current_cc.push_back(cur);
    vis[cur]=1;
    for(int nxt:adj[cur])
    {
        if(vis[nxt]) continue;
        dfs(nxt,adj,vis);
    }
}

int main()
{
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //connected components




    int n,e;
    cin>>n>>e;

    vector<vector<int>>adj(n+1);
    vector<int>vis(n+1);

    for(int i=1;i<=n;i++)
    {
        make(i);
    }

    while(e--)
    {
        int u,v;
        cin>>u>>v;
        Union(u,v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int connected_count=0;

    for(int i=1;i<=n;i++)
    {
        if(i==find(i)) connected_count++;
    }
    cout<<"Components: "<<connected_count<<endl;


    for(int i=1;i<=n;i++)
    {
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i,adj,vis);
        cc.push_back(current_cc);
    }



    for(auto x:cc)
    {
        for(int xx:x)
        {
            cout<<xx<<" ";
        }
        cout<<endl;
    }
}

