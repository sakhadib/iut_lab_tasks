#include <bits/stdc++.h>
using namespace std;

struct MyTreeNode {
    int amar_value;
    MyTreeNode* bam_baccha;
    MyTreeNode* dan_baccha;
    MyTreeNode* bap;
    MyTreeNode() : amar_value(0), bam_baccha(NULL), dan_baccha(NULL), bap(NULL) {}
    MyTreeNode(int x) : amar_value(x), bam_baccha(NULL), dan_baccha(NULL), bap(NULL) {}
};


void printPaths(MyTreeNode* adipurush, vector<int>& path) {
    if (adipurush == NULL) return;

    path.push_back(adipurush->amar_value);

    if (adipurush->bam_baccha == NULL && adipurush->dan_baccha == NULL) {

        cout << "1 ";
        for (int i = 1; i < path.size(); i++) {
            if (i > 1) cout << " ";
            cout << path[i];
        }
        cout << " (" << path.size() << ")" << endl;
    } else {
        printPaths(adipurush->bam_baccha, path);
        printPaths(adipurush->dan_baccha, path);
    }

    path.pop_back();
}

int main() {


    int n;
    cin >> n;
    vector<MyTreeNode> Nodes(n + 1); 

    for (int i = 1; i <= n; i++) {
        Nodes[i].amar_value = i;
    }

    for (int i = 1; i <= n; i++) {
        int amar_value, bap, key;
        cin >> amar_value >> bap >> key;
        Nodes[amar_value].bap = &Nodes[bap];
        if (key == 1) {
            Nodes[bap].bam_baccha = &Nodes[amar_value];
        } else if (key == 2) {
            Nodes[bap].dan_baccha = &Nodes[amar_value];
        }
    }

    MyTreeNode* adipurush = &Nodes[1]; 

    vector<int> path;
    printPaths(adipurush, path);

    return 0;
}
