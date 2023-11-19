//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int key;
    int size;
    Node *left, *right;
};

// A utility function to create a new BST node
Node *newNode(int item) {
    Node *temp =  new Node();
    temp->key = item;
    temp->size = 1;
    temp->left = temp->right = NULL;
    return temp;
}

// Returns size of tree rooted at given node
int size(Node* node) {
    if (node == NULL)
        return 0;
    else
        return node->size;
}


/* A utility function to insert a new node with given key in BST */
Node* insert(Node* node, int key) {
    if (node == NULL) 
        return newNode(key);

    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);   

    
    node->size = 1 + size(node->left) + size(node->right);

    /* return the (unchanged) node pointer */
    return node;
}


// Returns number of keys in tree rooted at x that are less than the given key.
int ds_rank(Node* x, int key) {
    if (x == NULL) 
        return 0;
    if (key < x->key)
        return ds_rank(x->left, key);
    else if (key > x->key)
        return 1 + size(x->left) + ds_rank(x->right, key);
    else
        return size(x->left);
}

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());



    Node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 75);
    root = insert(root, 25);
    root = insert(root, 29);
    root = insert(root, 45);
    root = insert(root, 60);
    root = insert(root, 10);

    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int key;
        cin >> key;
        cout << ds_rank(root, key) << endl;
    }


    
    return 0;
}