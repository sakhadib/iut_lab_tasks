//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data){
            this->data = data;
            this->next = NULL;
        }
};

// Insert front
// Insert Back
// Insert After Value
// Delete Front
// Delete Back
// Delete Value
// print list
// search value

node *head = NULL;

void insertFront(int key){
    node *newNode = new node(key);
    newNode->next = head;
    head = newNode;
}

void insert_back(int key){
    node *current = new node(key);
    current->next = NULL;
    node *temp = head;
    while(temp != NULL){  
        if(temp->next == NULL){ 
            temp->next = current; 
            break; 
        }
        temp = temp->next; 
    }
}

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());


    
    return 0;
}