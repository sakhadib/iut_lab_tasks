//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

int parent[100];

void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if (a != b)
        parent[b] = a;
}

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        make_set(i);
    }

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        union_sets(x, y);
    }

    int query;
    cin >> query;
    while(query--){
        int x, y;
        cin >> x >> y;
        if(find_set(x) == find_set(y)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }


    
    return 0;
}