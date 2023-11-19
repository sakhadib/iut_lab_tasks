//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int key){
            data = key;
            next = NULL;
        }
};

class linklist{
    public:
        node *head;

        linklist() : head(NULL) {}

        bool isempty(){
            if(head->next == NULL){
                return true;
            }
            else{
                return false;
            }
        }

        void insert_front(int key){
            node *current = new node(key);
            node *temp = head;
            head = current;
            current->next = temp;
        }

        void insert_back(int key){
            node *current = new node(key);
            node *temp = head;
            while(temp != NULL){
                if(temp->next == NULL){
                    temp->next = current;
                    current->next = NULL;
                }
                temp = temp->next;
            }
        }

        void insert_after(int key, int val){
            node *current = new node(key);
            node *temp = head;
            while(temp != NULL){
                if(temp->data == val){
                    current->next = temp->next;
                    temp->next = current;
                }
                temp = temp->next;
            }
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

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());


    int x;
    linklist l;
    while(x != -1){
        cin >> x;
        if(x!=-1)
            l.insert_front(x);
    }
    l.print();
    while(x != -2){
        cin >> x;
        if(x!=-2)
            l.insert_back(x);
    }
    l.print();

    l.insert_after(9, 6);
    l.print();

    
    return 0;
}