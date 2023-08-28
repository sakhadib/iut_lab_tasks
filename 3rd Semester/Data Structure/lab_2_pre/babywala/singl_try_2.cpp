#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void istart(Node *&head, int data){
    Node *current = new Node(data);  // dynamically taking new node memory
    current->next = head;  // jehetu ekhon jeita ditesi seita head so previous head ekhn ekhan theke jawa jabe. setai set korlam
    head = current;  //so ekhon head er address current er address e set korlam jate head er address change hoye jay
}

void iend(Node *&head, int data){
    Node *current = new Node(data);  // dynamically taking new node memory
    Node *temp = head;  // temp er address head er address e set korlam jate head er address change na hoy
    while(temp != NULL){  // temp er address NULL na hoye jawa porjonto loop cholbe. basically travarse korbe
        if(temp->next == NULL){ // temp er next NULL hole seta last node. so seta ke current er next e set korlam
            temp->next = current; // temp er next e current er address set korlam
            break; // loop break korlam
        }
        temp = temp->next; // temp er address temp er next e set korlam
    }
    return;
}

void insert(Node *&head, int position, int data){
    if(position == 1){  // position 1 hole istart function call korlam
        istart(head, data);  // istart function call
        return; // return korlam karon ar kono kaj nai
    }

    Node *current = new Node(data);  // dynamically taking new node memory
    Node *temp = head; // temp er address head er address e set korlam jate head er address change na hoy

    int count = 1; // count 1 kore nilam karon head er address e temp er address set korechi
    while(temp != NULL){ // temp er address NULL na hoye jawa porjonto loop cholbe. basically travarse korbe
        if(count == position - 1){ // count position - 1 hole seta position er ager node. so seta ke current er next e set korlam
            Node *temp2 = temp->next; // temp2 er address temp er next e set korlam
            temp->next = current; // temp er next e current er address set korlam
            current->next = temp2; // current er next e temp2 er address set korlam
            break;
        }
        temp = temp->next; // temp er address temp er next e set korlam
        count++; // count 1 baraiya dilam karon temp er address temp er next e set korechi
    }
    return;
}

void print(Node *head){
    Node *temp = head; // temp er address head er address e set korlam jate head er address change na hoy
    while(temp != NULL){ // temp er address NULL na hoye jawa porjonto loop cholbe. basically travarse korbe
        cout << temp->data << " "; // temp er data print korlam
        temp = temp->next; // temp er address temp er next e set korlam
    }
    cout << endl;
}

int main(){
    Node *n1 = new Node(1); // dynamically taking new node memory
    Node *head = n1; // head er address n1 er address e set korlam.
    Node *tail = n1; // tail er address n1 er address e set korlam.

    istart(head, 2); // istart function call
    print(head); // print function call
    iend(head, 3); // iend function call
    print(head); // print function call
    insert(head, 2, 4); // insert function call
    print(head); // print function call

    // Head amader 1 number position

    return 0;
}