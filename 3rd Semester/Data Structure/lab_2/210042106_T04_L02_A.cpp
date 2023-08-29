#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    
    Node(int val) : value(val), next(NULL) {}
};

class LinkedList {
public:
    Node* head;
    
    LinkedList() : head(NULL) {}
    
    void insert(int value) {
        if (!head) {
            head = new Node(value);
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = new Node(value);
        }
    }
    
    void removeDuplicates() {
        if (!head) {
            return;
        }
        
        Node* current = head;
        while (current->next) {
            if (current->value == current->next->value) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
    }
    
    void print() {
        Node* current = head;
        while (current) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
    
    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList linkedList;
    int value;
    
    while (true) {
        cin >> value;
        if (value == -1) {
            break;
        }
        linkedList.insert(value);
    }
    
    linkedList.removeDuplicates();
    linkedList.print();
    
    return 0;
}
