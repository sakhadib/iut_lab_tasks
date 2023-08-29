#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
    public:
        int data;
        node *my_next_node;
    
        node(int data){
            this->data = data;
            this->my_next_node = NULL;
        }
};

node *n1 = new node(1);
node *head = n1;

void insert_front(int key){
    node *current = new node(key); 
    current->my_next_node = head; 
    head = current;  
}

void insert_back(int key){
    node *current = new node(key);
    current->my_next_node = NULL;
    node *my_temporary_node = head;
    while(my_temporary_node != NULL){  
        if(my_temporary_node->my_next_node == NULL){ 
            my_temporary_node->my_next_node = current; 
            break; 
        }
        my_temporary_node = my_temporary_node->my_next_node; 
    }
}

void Insert_after_node(int key, int v){
    bool is_found = false;
    node *current = new node(key);
    node *my_temporary_node = head;
    while(my_temporary_node != NULL){  
        if(my_temporary_node->data == v){ 
            node *temp2 = my_temporary_node->my_next_node; 
            my_temporary_node->my_next_node = current; 
            current->my_next_node = temp2; 
            is_found = true;
            break;
        }
        my_temporary_node = my_temporary_node->my_next_node; 
    }

    if(is_found == false){
        cout << "node not found" << endl;
    }
}


void update_node(int key, int v){
    bool is_found = false;
    node *my_temporary_node = head;
    while(my_temporary_node != NULL){  
        if(my_temporary_node->data == v){ 
            my_temporary_node->data = key;
            is_found = true;
            break;
        }
        my_temporary_node = my_temporary_node->my_next_node; 
    }

    if(is_found == false){
        cout << "node not found" << endl;
    }
}

void remove_node(int key){
    bool is_found = false;
    node *my_temporary_node = head;
    if(head->data == key){
        head = head->my_next_node;
        is_found = true;
    }
    else{
        while(my_temporary_node->my_next_node != NULL){  
        if(my_temporary_node->my_next_node->data == key){ 
            node *temp2 = my_temporary_node->my_next_node->my_next_node;
            my_temporary_node->my_next_node = temp2;
            is_found = true;
            break;
        }
        my_temporary_node = my_temporary_node->my_next_node; 
    }
    }
    

    if(is_found == false){
        cout << "node not found" << endl;
    }
}

void remove_head(){
    node *my_temporary_node = head->my_next_node;  //head er porer address ta store kore nilam
    head = my_temporary_node;  // ebar oi my_next_node ta ke head e rakhtesi
}

void remove_end(){
    node *my_temporary_node = head;
    node *temp2;
    while(my_temporary_node != NULL){ 
        if(my_temporary_node->my_next_node->my_next_node == NULL){
            temp2 = my_temporary_node;
            break;
        }
        my_temporary_node = my_temporary_node->my_next_node; 
    }
    temp2->my_next_node = NULL;
}


void print(){
    node *my_temporary_node = head;
    while(my_temporary_node != NULL){ 
        cout << my_temporary_node->data << " "; 
        my_temporary_node = my_temporary_node->my_next_node; 
    }
    cout << endl;
}


int main(){
            
    insert_front(20);
    insert_back(64);
    
    while(true){
        cout << "Please input a number_____  ";
        int bash;
        cin >> bash;

        if(bash == 8){
            break;
        }

        else if(bash == 1){
            //insert at front
            int key;
            cin >> key;
            insert_front(key);
            print();
        }

        else if(bash == 2){
            //insert at back
            int key;
            cin >> key;
            insert_back(key);
            print();
        }

        else if(bash == 3){
            int key, v;
            cin >> key >> v;
            Insert_after_node(key, v);
            print();
        }

        else if(bash == 4){
            int key, v;
            cin >> key >> v;
            update_node(key, v);
            print();
        }

        else if(bash == 5){
            remove_head();
            print();
        }

        else if(bash == 6){
            int key;
            cin >> key;
            remove_node(key);
            print();
        }

        else if(bash == 7){
            remove_end();
            print();
        }


        else if(bash == 0){
            print(); 
        }



    }

}