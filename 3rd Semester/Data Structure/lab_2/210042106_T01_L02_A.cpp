#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
    public:
        int data;
        node *next;
    
        node(int data){
            this->data = data;
            this->next = NULL;
        }
};

node *n1 = new node(1);
node *head = n1;

void insert_front(int key){
    node *current = new node(key); 
    current->next = head; 
    head = current;  
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

void Insert_after_node(int key, int v){
    bool is_found = false;
    node *current = new node(key);
    node *temp = head;
    while(temp != NULL){  
        if(temp->data == v){ 
            node *temp2 = temp->next; 
            temp->next = current; 
            current->next = temp2; 
            is_found = true;
            break;
        }
        temp = temp->next; 
    }

    if(is_found == false){
        cout << "node not found" << endl;
    }
}


void update_node(int key, int v){
    bool is_found = false;
    node *temp = head;
    while(temp != NULL){  
        if(temp->data == v){ 
            temp->data = key;
            is_found = true;
            break;
        }
        temp = temp->next; 
    }

    if(is_found == false){
        cout << "node not found" << endl;
    }
}

void remove_node(int key){
    bool is_found = false;
    node *temp = head;
    if(head->data == key){
        head = head->next;
        is_found = true;
    }
    else{
        while(temp->next != NULL){  
        if(temp->next->data == key){ 
            node *temp2 = temp->next->next;
            temp->next = temp2;
            is_found = true;
            break;
        }
        temp = temp->next; 
    }
    }
    

    if(is_found == false){
        cout << "node not found" << endl;
    }
}

void remove_head(){
    node *temp = head->next;  //head er porer address ta store kore nilam
    head = temp;  // ebar oi next ta ke head e rakhtesi
}

void remove_end(){
    node *temp = head;
    node *temp2;
    while(temp != NULL){ 
        if(temp->next->next == NULL){
            temp2 = temp;
            break;
        }
        temp = temp->next; 
    }
    temp2->next = NULL;
}


void print(){
    node *temp = head;
    while(temp != NULL){ 
        cout << temp->data << " "; 
        temp = temp->next; 
    }
    cout << endl;
}


int main(){
            
    insert_front(3);
    insert_back(5);
    
    while(true){
        cout << "Please input a number_____  ";
        int command;
        cin >> command;

        if(command == 8){
            break;
        }

        else if(command == 1){
            //insert at front
            int key;
            cin >> key;
            insert_front(key);
            print();
        }

        else if(command == 2){
            //insert at back
            int key;
            cin >> key;
            insert_back(key);
            print();
        }

        else if(command == 3){
            int key, v;
            cin >> key >> v;
            Insert_after_node(key, v);
            print();
        }

        else if(command == 4){
            int key, v;
            cin >> key >> v;
            update_node(key, v);
            print();
        }

        else if(command == 5){
            remove_head();
            print();
        }

        else if(command == 6){
            int key;
            cin >> key;
            remove_node(key);
            print();
        }

        else if(command == 7){
            remove_end();
            print();
        }


        else if(command == 0){
            print(); 
        }



    }

}