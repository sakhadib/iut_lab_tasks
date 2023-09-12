//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

class Queue{
    private:
        int* array;
        int front;
        int rear;
        int capacity;
    
    public:
        Queue(int size){
            this->array = new int[size];
            this->capacity = size;
            this->front = -1;
            this->rear = -1;
        }

        bool isEmpty(){
            return (this->front == -1);
        }

        bool isFull(){
            return ((this->rear + 1) % this->capacity == this->front);
        }

        void enqueue(int data){
            if(isFull()){
                cout << "Queue is full" << endl;
            }
            else{
                this->rear = (this->rear + 1) % this->capacity;
                this->array[this->rear] = data;
                if(this->front == -1){
                    this->front = this->rear;
                }
            }
        }

        int dequeue(){
            if(isEmpty()){
                cout << "Queue is empty" << endl;
                return -1;
            }
            else{
                int data = this->array[this->front];
                if(this->front == this->rear){
                    this->front = -1;
                    this->rear = -1;
                }
                else{
                    this->front = (this->front + 1) % this->capacity;
                }
                return data;
            }
        }

        int peek(){
            if(isEmpty()){
                cout << "Queue is empty" << endl;
                return -1;
            }
            else{
                return this->array[this->front];
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

    Queue q(10);
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