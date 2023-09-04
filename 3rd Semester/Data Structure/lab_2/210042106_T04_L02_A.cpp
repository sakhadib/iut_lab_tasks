#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* NEXT;
    
    Node(int val) : value(val), NEXT(NULL) {}
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
            while (current->NEXT) {
                current = current->NEXT;
            }
            current->NEXT = new Node(value);
        }
    }
    
    void removeDuplicates() {
        if (!head) {
            return;
        }
        
        Node* current = head;
        while (current->NEXT) {
            if (current->value == current->NEXT->value) {
                Node* temp = current->NEXT;
                current->NEXT = current->NEXT->NEXT;
                delete temp;
            } else {
                current = current->NEXT;
            }
        }
    }
    
    void print() {
        Node* current = head;
        while (current) {
            cout << current->value << " ";
            current = current->NEXT;
        }
        cout << endl;
    }
    
    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->NEXT;
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
