//Adib Sakhawat - sakhadib
//IUT, 2023

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int key;
    TreeNode *left, *right;
};

TreeNode* newTreeNode(int item) {
    TreeNode* temp = new TreeNode();
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

TreeNode* insertNode(TreeNode* node, int key) {
    if (node == NULL) return newTreeNode(key);
    if (key < node->key) node->left = insertNode(node->left, key);
    else if (key > node->key) node->right = insertNode(node->right, key);
    return node;
}

bool printPath(TreeNode *root, int key, vector<int> &path) {
    if (root == NULL) return false;
    path.push_back(root->key);
    if (root->key == key) return true;
    if ((root->left && printPath(root->left, key, path)) || (root->right && printPath(root->right, key, path))) return true;
    path.pop_back();
    return false;
}

void printCommonPath(TreeNode *root, int n1, int n2) {
    vector<int> path1, path2;
    if (!printPath(root, n1, path1) || !printPath(root, n2, path2)) return;
    int i;
    for (i = 0; i < path1.size() && i < path2.size(); i++) {
        if (path1[i] != path2[i]) break;
        cout << path1[i] << " ";
    }
    for (int j = i; j < path2.size(); j++) cout << path2[j] << " ";
    cout << "\n" << path2.size() - i + 1 << "\n";
}


int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());

    TreeNode *root = NULL;
    root = insertNode(root, 12);
    insertNode(root, 9);
    insertNode(root, 5);
    insertNode(root, 11);
    insertNode(root, 20);
    insertNode(root, 15);
    insertNode(root, 7);
    insertNode(root, 3);
    insertNode(root, 6);
    insertNode(root, 27);
    printCommonPath(root, 5, 11);
    printCommonPath(root, 3, 12);
    printCommonPath(root, 6, 11);
    printCommonPath(root, 7, 9);
    printCommonPath(root, 7, 11);
    printCommonPath(root, 3, 15);


    
    return 0;
}