#include<bits/stdc++.h>
#include <chrono>
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

class linklist{
    public:
        Node *head, *tail;
        linklist(){
            head = NULL;
            tail = NULL;
        }

        void sorter(){
            Node *temp = head;
            while(temp->next != head){
                if(temp->data > temp->next->data){
                    swap(temp->data, temp->next->data);
                }
                else{
                    break;
                }
                temp = temp->next;
            }
        }


        void insertFront(int key){
            Node *newnode = new Node(key);
            if(head == NULL){
                head = newnode;
                tail = newnode;
                tail->next = head;
            }
            else{
                newnode->next = head;
                head = newnode;
                tail->next = head;
            }

            sorter();
        }
        void insertBack(int key){
            Node *newnode = new Node(key);
            if(head == NULL){
                head = newnode;
                tail = newnode;
                tail->next = head;
            }
            else{
                tail->next = newnode;
                tail = newnode;
                tail->next = head;
            }
        }
        void insertAfter(int key, int val){
            
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return;
            }
            Node *newnode = new Node(key);
            Node *temp = head;
            while(temp->data != val){
                temp = temp->next;
            }
            if(!temp){
                cout<<"Node with value "<<val<<" not found"<<endl;
                return;
            }
            newnode->next=temp->next;
            temp->next = newnode;
        }

        void updateNode(int key, int val){
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return;
            }
            Node *temp = head;
            while(temp && temp->data != val){
                temp = temp->next;
            }
            if(!temp){
                cout<<"Node with value "<<val<<" not found"<<endl;
                return;
            }
            temp->data = key;
        }

        void removeFront(){
            if(!head){
                cout << "Empty List" << endl;
                return;
            }
            Node *temp = head;
            if(head == tail){
                delete temp;
                head = NULL;
                tail = NULL;
            }
            else{
                head = head->next;
                tail->next = head;
                delete temp;
            }
        }

        void removeElement(){
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return;
            }
            Node *temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            Node *temp2 = tail;  
            temp->next = head;
            tail = temp;  
            delete temp2;
        }

        void removeBack(){
            if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
            }
            Node *temp = head;
            if(head == tail){
                delete temp;
                head = NULL;
                tail = NULL;
            }
            else{
                while(temp->next != tail){
                    temp = temp->next;
                }
                Node *temp2 = tail; 
                temp->next = head;
                tail = temp;  
                delete temp2;  
            }
        }

        void print(){
            if(head== NULL)
            {
                cout << "Empty "<<" ";
                return ;
            }
            if (head==tail)
            {
                cout<< head-> data<<" ";
                return ;
            }
            Node *cur = head->next;
            cout <<head->data <<" ";
            while(cur!= head)
            {
                cout<<cur->data<<" ";
                cur = cur->next;
            }
            cout <<endl;
        }
};



int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());

    linklist ll;
    int x, t;
    cin >> t;
    while(t--){
        cin >> x;
        ll.insertFront(x);
    }

    // Measure the time taken by the sorter function
    auto start = std::chrono::high_resolution_clock::now();
    ll.sorter();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    cout << "Sorted List: ";
    ll.print();

    cout << "Time taken by sorter function: " << duration.count() << " seconds" << endl;

    return 0;
}