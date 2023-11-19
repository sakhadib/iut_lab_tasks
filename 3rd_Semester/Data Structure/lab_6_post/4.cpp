#include<bits/stdc++.h>
using namespace std;

struct MyTreeNode {
    int amar_value;
    MyTreeNode* bam_baccha;
    MyTreeNode* dan_baccha;
    MyTreeNode(int x) : amar_value(x), bam_baccha(NULL), dan_baccha(NULL) {}
};

bool isMirror(MyTreeNode* node1, MyTreeNode* node2) {
    if (node1 == NULL && node2 == NULL)
        return true;
    if (node1 != NULL && node2 != NULL && node1->amar_value == node2->amar_value)
        return (isMirror(node1->bam_baccha, node2->dan_baccha) && isMirror(node1->dan_baccha, node2->bam_baccha));
    return false;
}

bool isSymmetric(MyTreeNode* adipurush) {
    return isMirror(adipurush, adipurush);
}

int main() {
    MyTreeNode* adipurush = new MyTreeNode(1);
    adipurush->bam_baccha = new MyTreeNode(2);
    adipurush->dan_baccha = new MyTreeNode(2);
    adipurush->bam_baccha->bam_baccha = new MyTreeNode(3);
    adipurush->bam_baccha->dan_baccha = new MyTreeNode(4);
    adipurush->dan_baccha->bam_baccha = new MyTreeNode(5);
    adipurush->dan_baccha->dan_baccha = new MyTreeNode(3);

    if(isSymmetric(adipurush))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
