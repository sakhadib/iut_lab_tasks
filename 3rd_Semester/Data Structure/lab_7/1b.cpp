#include <bits/stdc++.h>

using namespace std;

class DSU {
public:
    vector<int> parent;
    vector<int> values;

    DSU(int n) {
        parent.resize(n);
        values.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            values[i] = i + 1; // Initialize values
        }
    }

    int find(int x) {
        if (x == parent[x])
            return x;
        int root = find(parent[x]);
        return parent[x] = root;
    }

    void unite(int x, int y) {
        int root_x = find(x);
        int root_y = find(y);
        parent[root_x] = root_y;
    }

    void update(int x, int y) {
        int root_x = find(x);
        values[root_x] = y;
    }

    int get(int x) {
        int root_x = find(x);
        return values[root_x];
    }

};

int main() {

    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());

    int n, q;
    cin >> n >> q;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    DSU dsu(n);

    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int x, y;
            cin >> x >> y;
            x--; // 0-based indexing
            dsu.update(x, y);
            //dsu.print(n);
        } else {
            int idx;
            cin >> idx;
            idx--; // 0-based indexing
            int result = dsu.get(idx);
            cout << result << endl;
        }
    }

    return 0;
}
