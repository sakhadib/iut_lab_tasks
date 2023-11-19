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

void printArray(int last){
    for(int i = 1; i <= last; i++){
        cout << parent[i] << " ";
    }
    cout << "\n";
}

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());


    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            int q;
            cin >> q;
            make_set(q);
        }

        for(int i = 0; i < m; i++){
            int key;
            cin >> key;
            if(key == 1){
                int x, y;
                cin >> x >> y;
                union_sets(y, x);
                printArray(n);
            }
            else{
                int x;
                cin >> x;
                cout << find_set(x) << "\n";
            }
        }
    }

    
    return 0;
}