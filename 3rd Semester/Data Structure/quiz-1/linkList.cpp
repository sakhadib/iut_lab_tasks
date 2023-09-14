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

        void print(){
            node *temp = head;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
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

    
    return 0;
}