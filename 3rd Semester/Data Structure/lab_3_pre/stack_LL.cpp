//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>

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

class linklist{
    public:
        node *head;

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
};

class mystack{
    public:
        linklist l1;
        node *top;
        mystack(){
            top = NULL;
        }

        // Pushes on top
        void push(int value){
            l1.insert_front(value);
            top = l1.head;
        }

        // Pops the top
        void pop(){
            l1.remove_head();
            top = l1.head;
        }

        // Returns the top
        int Top(){
            return top->data;
        }

        // Checks if empty
        bool isEmpty(){
            if(top == NULL){
                return true;
            }
            return false;
        }

        // Prints the stack
        void print(){
            l1.print();
        }
};

int main() {
    
    mystack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    s1.print();

    s1.pop();
    s1.pop();
    s1.pop();

    if(s1.isEmpty()){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }

    s1.print();



    
    return 0;
}