//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
private:
    int* queue;
    int front;
    int rear;
    int capacity;
    int currentSize;

public:
    CircularQueue(int size) {
        capacity = size;
        queue = new int[capacity];
        front = rear = -1;
        currentSize = 0;
    }

    void push_right(int x) {
        if(isFull()) {
            cout << "queue is full. cannot enqueue" << endl;
            return;
        }
        
        if (isEmpty()) {
            front = rear = 0;
        } 
        else {
            rear = (rear + 1) % capacity;
        }

        queue[rear] = x;
        cout << "push Right -> " << x << endl;
        currentSize++;
    }

    void push_left(int x){
        if(isFull()) {
            cout << "queue is full. cannot enqueue" << endl;
            return;
        }
        
        if (isEmpty()) {
            front = rear = 0;
        } 
        else {
            front = (front - 1 + capacity) % capacity;
        }

        queue[front] = x;
        cout << "Push Left -> " << x << endl;
        currentSize++;
    }


    void pop_left() {
        if (isEmpty()) {
            cout << "queue is empty. cannot dequeue" << endl;
            return;
        }

        int dequeuedValue = queue[front];
        if (front == rear) {
            front = rear = -1;
        } 
        else {
            front = (front + 1) % capacity;
        }

        currentSize--;
        cout << "pop Left -> " << dequeuedValue << endl;

    }

    void pop_right(){
        if (isEmpty()) {
            cout << "queue is empty. cannot dequeue" << endl;
            return;
        }

        int dequeuedValue = queue[rear];
        if (front == rear) {
            front = rear = -1;
        } 
        else {
            rear = (rear - 1 + capacity) % capacity;
        }

        currentSize--;
        cout << "pop Right -> " << dequeuedValue << endl;

    }

    int size() {
        return currentSize;
    }

public:

    int _front() {
        if (isEmpty()) {
            cout << "queue is empty. No front element available."<< endl;
            return -1; 
        }

        return queue[front];
    }

    int _rear() {
        if (isEmpty()) {
            cout << "queue is empty. No rear element available." << endl;
            return -1;
        }

        return queue[rear];
    }

    bool isEmpty() {
        return currentSize == 0;
    }

    bool isFull() {
        return currentSize == capacity;
    }

    void print(){
        if(isEmpty()){
            cout << "queue is empty" << endl;
            return;
        }

        cout << "queue : ";
        for(int i = front; i != rear; i = (i + 1) % capacity){
            cout << queue[i] << " ";
        }
        cout << queue[rear] << endl;
    }
};

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());

    int t;
    cin >> t;
    while(t--){
        int size, num_of_cmd;
        cin >> num_of_cmd >> size;
        CircularQueue cq(size);
        string cmd;
        while(num_of_cmd--){
            
            cin >> cmd;

            if(cmd == "pushRight"){
                //push_right
                int x;
                cin >> x;
                cq.push_right(x);
            }

            else if(cmd == "pushLeft"){
                //push_left
                int x;
                cin >> x;
                cq.push_left(x);
            }

            else if(cmd == "popRight"){
                //pop_right
                cq.pop_right();
            }

            else if(cmd == "popLeft"){
                //pop_left
                cq.pop_left();
            }
            else if(cmd == "front"){
                //front
                int x = cq._front();
                cout << "front -> " << x << endl;
            }

            else if(cmd == "rear"){
                //rear
                int x = cq._rear();
                cout << "rear -> " << x << endl;
            }

            else if(cmd == "size"){
                //size
                int x = cq.size();
                cout << "size is -> " << x << endl;
            }

            else if(cmd == "print"){
                //print
                cq.print();
            }

            else{
                cout << "Invalid Command" << endl;
            }
        }

        cout << "Thanks";
    }

    

    return 0;
}



/**
4
pushRight 1
pushLeft 2
pushRight 3
pushLeft 4
print
popRight
print
popLeft
print
pushLeft 5
pushRight 6
size
print
front
rear
pushLeft 9
-1
*/