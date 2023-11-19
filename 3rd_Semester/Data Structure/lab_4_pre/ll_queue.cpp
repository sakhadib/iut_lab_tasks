//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
    private:
        Node* front;
        Node* rear;

    public:
        Queue() {
            this->front = NULL;
            this->rear = NULL;
        }

        bool isEmpty() {
            return (this->front == NULL);
        }

        void enqueue(int data){
            Node* newNode = new Node(data);
            if(isEmpty()){
                this->front = newNode;
                this->rear = newNode;
            }
            else{
                this->rear->next = newNode;
                this->rear = newNode;
            }
        }

        int dequeue(){
            if(isEmpty()){
                cout << "Queue is empty" << endl;
                return -1;
            }
            else{
                int data = this->front->data;
                Node* temp = this->front;
                this->front = this->front->next;
                delete temp;
                return data;
            }
        }

        int peek(){
            if(isEmpty()){
                cout << "Queue is empty" << endl;
                return -1;
            }
            else{
                return this->front->data;
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

    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Queue Peek : " << q.peek() << endl;
    cout << "Queue Dequeue : " << q.dequeue() << endl;
    cout << "Queue Dequeue : " << q.dequeue() << endl;
    q.enqueue(4);
    cout << "Queue Peek : " << q.peek() << endl;

    return 0;
}