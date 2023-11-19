//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class linkedlist{
    public:
        Node *head;
        int thisSize;

        linkedlist(){
            head = NULL;
            thisSize = 0;
        }

// insert front
        void insertFront(int data){
            Node *newNode = new Node(data);
            newNode->next = head;
            head = newNode;
            thisSize++;
        }

// insert back
        void insertBack(int data){
            Node *newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                return;
            }
            Node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
            thisSize++;
        }

// insert after
        void insertAfter(int data, int key){
            Node *newNode = new Node(data);
            Node *temp = head;
            while(temp != NULL){
                if(temp->data == key){
                    newNode->next = temp->next;
                    temp->next = newNode;
                    thisSize++;
                    return;
                }
                temp = temp->next;
            }
            cout << "Key not found" << endl;
        }

// delete front
        void deleteFront(){
            if(head == NULL){
                cout << "List is empty" << endl;
                return;
            }
            Node *temp = head;
            head = head->next;
            delete temp;
            thisSize--;
        }

// delete back
        void deleteBack(){
            if(head == NULL){
                cout << "List is empty" << endl;
                return;
            }
            Node *temp = head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
            thisSize--;
        }

// print List
        void printList(){
            Node *temp = head;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

// Size
        int Size(){
            return thisSize;
        }
};


int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());

    linkedlist l;
    l.insertFront(1);
    l.insertFront(2);
    l.insertFront(3);
    l.printList();
    l.insertBack(4);
    l.insertBack(5);
    l.printList();
    l.insertAfter(6, 3);
    l.printList();
    l.deleteFront();
    l.printList();
    l.deleteBack();
    l.printList();
    cout << l.Size() << endl;


    
    return 0;
}