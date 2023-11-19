//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int key;
    Node *left, *right;
};


Node *n_node(int x) {
    Node *temp =  new Node();
    temp->key = x;
    temp->left = temp->right = NULL;
    return temp;
}


void in_order(Node *r) {
    if (r != NULL) {
        in_order(r->left);
        cout << r->key << " ";
        in_order(r->right);
    }
}


Node* INSERT_TO(Node* node, int key) {

    if (node == NULL) return n_node(key);

    if (key < node->key)
        node->left  = INSERT_TO(node->left, key);
    else if (key > node->key)
        node->right = INSERT_TO(node->right, key);   

    return node;
}

// Returns true if given key lies in given BST.
bool search(Node* r, int key) {

    if (r == NULL)
       return false;  // pai nai

    if (r->key == key)
       return true;

    if (r->key < key)
       return search(r->right, key);  //boro tai right subtree


    return search(r->left, key);  //choto tai left subtree
}

int main() {

    Node *r = NULL;
    int key;
    while(true) {
        cin >> key;
        if(key == -1) 
            break;

        if(search(r, key-1) || search(r, key-2) || search(r, key-3) || search(r, key+1) || search(r, key+2) || search(r, key+3)) {
            in_order(r);
            cout << " - (Reservation failed)" << endl;
        } 
        
        else {
            r = INSERT_TO(r, key);
            in_order(r);
            cout << endl;
        }

    }
    return 0;
}