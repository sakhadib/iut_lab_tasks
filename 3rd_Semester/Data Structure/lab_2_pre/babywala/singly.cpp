//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }

};

void insertAtHead(Node *&head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data){
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insert(Node *&head, int position, int data){
    if(position = 1){
        insertAtHead(head, data);
        return;        
    }

    Node *current = new Node(data);
    Node *temp = head;

    int count = 1;
    while(temp != NULL){
        if(count == position - 1){
            Node *temp2 = temp->next;
            temp->next = current;
            current->next = temp2;
            break;
        }
        temp = temp->next;
        count++;
    }
    return;
}

void print(Node *head){
    Node *temp = head;
    while(temp->next != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    Node *n1 = new Node(1);

    Node *head = n1;
    Node *tail = n1;

    // Inserting
    insertAtHead(head, 0);
    print(head);
    insert(head, 1, 1);
    print(head);
    insert(head, 2, 2);
    print(head);
    insert(head, 3, 3);
    print(head);
    insertAtTail(tail, 4);

    // Printing
    print(head);

    return 0;
}