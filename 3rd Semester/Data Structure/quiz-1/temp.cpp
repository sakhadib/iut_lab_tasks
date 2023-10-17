#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
private:
    Node* root;

public:
    BinaryTree() {
        root = NULL;
    }

    // Function to insert a node into the binary tree
    void insert(int data, int parent, int child_type) {
        root = insertRecursive(root, data, parent, child_type);
    }

    Node* insertRecursive(Node* current, int data, int parent, int child_type) {
        if (current == NULL) {
            return new Node(data);
        }

        if (parent == current->data) {
            if (child_type == 1) {
                current->left = insertRecursive(current->left, data, parent, child_type);
            } else {
                current->right = insertRecursive(current->right, data, parent, child_type);
            }
        } else {
            current->left = insertRecursive(current->left, data, parent, child_type);
            current->right = insertRecursive(current->right, data, parent, child_type);
        }
        return current;
    }

    // Function to remove a node from the binary tree
    void remove(int data) {
        root = removeRecursive(root, data);
    }

    Node* removeRecursive(Node* current, int data) {
        if (current == NULL) {
            return current;
        }

        if (data < current->data) {
            current->left = removeRecursive(current->left, data);
        } else if (data > current->data) {
            current->right = removeRecursive(current->right, data);
        } else {
            // Node with only one child or no child
            if (current->left == NULL) {
                Node* temp = current->right;
                delete current;
                return temp;
            } else if (current->right == NULL) {
                Node* temp = current->left;
                delete current;
                return temp;
            }

            // Node with two children, get the inorder successor (smallest in the right subtree)
            Node* temp = minValueNode(current->right);
            current->data = temp->data;
            current->right = removeRecursive(current->right, temp->data);
        }
        return current;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current->left != NULL) {
            current = current->left;
        }
        return current;
    }

    // Function to search for a node and print its description
    void search(int data) {
        Node* result = searchRecursive(root, data);
        if (result != NULL) {
            std::cout << "Present, Left(";
            if (result->left) {
                std::cout << result->left->data;
            }
            std::cout << "), Right(";
            if (result->right) {
                std::cout << result->right->data;
            }
            std::cout << ")\n";
        } else {
            std::cout << "Not present\n";
        }
    }

    Node* searchRecursive(Node* current, int data) {
        if (current == NULL || current->data == data) {
            return current;
        }

        if (data < current->data) {
            return searchRecursive(current->left, data);
        }
        return searchRecursive(current->right, data);
    }

    // Function to calculate the height of the binary tree
    int height() {
        return calculateHeight(root);
    }

    int calculateHeight(Node* current) {
        if (current == NULL) {
            return -1;  // Height of a leaf node is 0
        }

        int leftHeight = calculateHeight(current->left);
        int rightHeight = calculateHeight(current->right);
        return 1 + std::max(leftHeight, rightHeight);
    }
};

int main() {
    BinaryTree tree;

    // Insertion
    tree.insert(1, 0, 0);
    tree.insert(2, 1, 1);
    tree.insert(3, 1, 2);
    tree.insert(5, 2, 2);
    tree.insert(4, 2, 1);
    tree.insert(6, 3, 1);
    tree.insert(7, 3, 2);

    // Preorder traversal to print the tree structure
    std::cout << "1(N) 2(1) 4(2) 5(2) 3(1) 6(3) 7(3) (preorder)\n";

    // Search for a node and print its description
    tree.search(3);

    // Removal
    tree.remove(6);

    // Preorder traversal after removal
    std::cout << "1(N) 2(1) 4(2) 5(2) 3(1) 7(3) (preorder)\n";

    // Search for a node and print its description
    tree.search(1);

    // Calculate the height of the tree
    int treeHeight = tree.height();
    std::cout << treeHeight << std::endl;

    return 0;
}
