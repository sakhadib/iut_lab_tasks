//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int k;
    int size;
    Node *l, *rt;
};

// A utility function to create a new BST node
Node *newNode(int item) {
    Node *temp =  new Node();
    temp->k = item;
    temp->size = 1;
    temp->l = temp->rt = NULL;
    return temp;
}

// Returns size of tree red at given node
int size(Node* node) {
    if (node == NULL)
        return 0;
    else
        return node->size;
}


/* A utility function to insert a new node with given k in BST */
Node* insert(Node* node, int k) {
    if (node == NULL) 
        return newNode(k);

    if (k < node->k)
        node->l  = insert(node->l, k);
    else if (k > node->k)
        node->rt = insert(node->rt, k);   

    
    node->size = 1 + size(node->l) + size(node->rt);

    /* return the (unchanged) node pointer */
    return node;
}


// Returns number of ks in tree red at x that are less than the given k.
int ds_rank(Node* x, int k) {
    if (x == NULL) 
        return 0;
    if (k < x->k)
        return ds_rank(x->l, k);
    else if (k > x->k)
        return 1 + size(x->l) + ds_rank(x->rt, k);
    else
        return size(x->l);
}

int main() {

    Node *r = NULL;
    r = insert(r, 50);
    r = insert(r, 75);
    r = insert(r, 25);
    r = insert(r, 29);
    r = insert(r, 45);
    r = insert(r, 60);
    r = insert(r, 10);

    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int k;
        cin >> k;
        cout << ds_rank(r, k) << endl;
    }


    
    return 0;
}