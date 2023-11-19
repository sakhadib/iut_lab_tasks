//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

int parent[100];
vector<vector<int> > v;
int ok[100];

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

int count_sets(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(parent[i] == i){
            count++;
        }
    }
    return count;
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

    int count = count_sets(n);

    cout << "connected components : " << count_sets(n) << "\n";


    //store connected components

    for(int i = 1; i <= n; i++){
        vector<int> temp;
        if(parent[i] == i){
            temp.push_back(i);
            for(int j = 1; j <= n; j++){
                if(find_set(j) == i){
                    temp.push_back(j);
                }
            }
            v.push_back(temp);
        }
    }


    for(int i = 0; i < v.size(); i++){
        cout << "{";
        for(int j = 1; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << "}\n";
    }

    return 0;
}