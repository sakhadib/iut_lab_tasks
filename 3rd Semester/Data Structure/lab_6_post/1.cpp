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

void preorderPrint(MyTreeNode* adipurush) {
    if (adipurush == NULL) {
        return;
    }
    cout << adipurush->amar_value << " (" << (adipurush->bap ? adipurush->bap->amar_value : 0) << ")\t";
    preorderPrint(adipurush->bam_baccha);
    preorderPrint(adipurush->dan_baccha);
}

bool search(MyTreeNode* adipurush, int data){
    if(adipurush == NULL){
        return false;
    }
    if(adipurush->amar_value == data){
        MyTreeNode* l = adipurush->bam_baccha;
        MyTreeNode* r = adipurush->dan_baccha;
        cout << "present   bam_baccha (" << l->amar_value << ")\tRight (" << r->amar_value << ")" << endl;
        return true;
    }
    return search(adipurush->bam_baccha, data) || search(adipurush->dan_baccha, data);
}

void remove(MyTreeNode* adipurush, int data) {
    if (adipurush == NULL) {
        return;
    }
    

    if (adipurush->amar_value == data) {
        
        if (adipurush->bam_baccha) {
            remove(adipurush->bam_baccha, adipurush->bam_baccha->amar_value);
            adipurush->bam_baccha = NULL;
        }
        if (adipurush->dan_baccha) {
            remove(adipurush->dan_baccha, adipurush->dan_baccha->amar_value);
            adipurush->dan_baccha = NULL;
        }
    }
    else {
        
        if (adipurush->bam_baccha) {
            if (adipurush->bam_baccha->amar_value == data) {
                remove(adipurush->bam_baccha, data);
                adipurush->bam_baccha = NULL;
            }
            else {
                remove(adipurush->bam_baccha, data);
            }
        }
        if (adipurush->dan_baccha) {
            if (adipurush->dan_baccha->amar_value == data) {
                remove(adipurush->dan_baccha, data);
                adipurush->dan_baccha = NULL;
            }
            else {
                remove(adipurush->dan_baccha, data);
            }
        }
    }
}


int main() {
    





    return 0;
}
