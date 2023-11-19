#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = NULL;
    }

    void insert(int val) {
        Node* new_node = new Node(val);
        if (root == NULL) {
            root = new_node;
            return;
        }
        Node* curr = root;
        while (true) {
            if (val < curr->data) {
                if (curr->left == NULL) {
                    curr->left = new_node;
                    break;
                }
                curr = curr->left;
            } else {
                if (curr->right == NULL) {
                    curr->right = new_node;
                    break;
                }
                curr = curr->right;
            }
        }
    }

    bool search(int val) {
        Node* curr = root;
        while (curr != NULL) {
            if (curr->data == val) {
                return true;
            } else if (val < curr->data) {
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }
        return false;
    }

    void inorder(Node* node) {
        if (node == NULL) {
            return;
        }
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void print_inorder() {
        inorder(root);
        cout << endl;
    }
};

int main() {
    BST bst;
    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(1);
    bst.insert(9);
    bst.print_inorder();
    cout << bst.search(7) << endl;
    cout << bst.search(4) << endl;
    return 0;
}
