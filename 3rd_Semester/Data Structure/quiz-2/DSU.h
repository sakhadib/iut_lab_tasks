#include<bits/stdc++.h>
using namespace std;

class DSU{
    vector<int> parent;
    vector<int> rank;
    public:
        DSU(int n){
            parent.resize(n);
            rank.resize(n);
            for(int i=0;i<n;i++){
                parent[i]=i;
                rank[i]=1;
            }
        }

        int find(int x){
            if(parent[x]==x){
                return x;
            }
            return parent[x] = find(parent[x]);
        }

        void unite(int x,int y){
            int s1=find(x);
            int s2=find(y);
            if(s1!=s2){
                if(rank[s1]<rank[s2]){
                    parent[s1]=s2;
                    rank[s2]+=rank[s1];
                }
                else{
                    parent[s2]=s1;
                    rank[s1]+=rank[s2];
                }
            }
        }
};

