//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//function to do preorder traversal of tree and print the nodes and parent of that TreeNode
void preorderPrint(TreeNode* root, int parent){
    if(root == NULL){
        return;
    }
    cout << root->val << " (" << parent << ")\t";
    preorderPrint(root->left, root->val);
    preorderPrint(root->right, root->val);
}

void inorderPrint(TreeNode* root, int parent){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left, root->val);
    cout << root->val << " (" << parent << ")\t";
    inorderPrint(root->right, root->val);
}

void postorderPrint(TreeNode* root, int parent){
    if(root == NULL){
        return;
    }
    postorderPrint(root->left, root->val);
    postorderPrint(root->right, root->val);
    cout << root->val << " (" << parent << ")\t";
}

//function to remove a TreeNode and it's subtree

    

//function to search a TreeNode
void search(TreeNode* root, int data){
    if(root == NULL){
        return;
    }
    if(root->val == data){
        TreeNode* l = root->left;
        TreeNode* r = root->right;
        cout << "present   Left (" << l->val << ")\tRight (" << r->val << ")";
        return;
    }
    search(root->left, data);
    search(root->right, data);
}

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());

    int n;
    cin >> n;
    TreeNode nodes[n+1];

    for (int i = 1; i <= n; i++){
        nodes[i].val = i;
    }

    for (int i = 0; i < n; i++){
        int data, parent, key;
        cin >> data >> parent >> key;

        if(key == 1){
            nodes[parent].left = &nodes[data];
        }
        else if(key == 2){
            nodes[parent].right = &nodes[data];
        }
    }

    cout << "Preorder: ";
    preorderPrint(&nodes[1], 0);
    cout << endl;
    cout << "Inorder: ";
    inorderPrint(&nodes[1], 0);
    cout << endl;
    cout << "Postorder: ";
    postorderPrint(&nodes[1], 0);
    cout << endl;


    search(&nodes[1], 3);







    
    return 0;
}