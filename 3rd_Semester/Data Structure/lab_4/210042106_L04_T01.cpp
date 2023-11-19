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

    void Enqueue(int x) {
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
        cout << "enque successfull -> " << x << endl;
        currentSize++;
    }

    int Dequeue() {
        if (isEmpty()) {
            cout << "queue is empty. cannot dequeue" << endl;
            return -1;
        }

        int dequeuedValue = queue[front];
        if (front == rear) {
            front = rear = -1;
        } 
        else {
            front = (front + 1) % capacity;
        }

        currentSize--;
        return dequeuedValue;
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
};

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());

    int size;
    cin >> size;
    CircularQueue cq(size);
    int cmd;
    while(true){
        cin >> cmd;

        if(cmd == -1){
            cout << "Thanks";
            break;
        }

        else if(cmd == 1){
            int data;
            cin >> data;
            cq.Enqueue(data);
        }

        else if(cmd == 2){
            int ret = cq.Dequeue();
            cout << "dequeued : " << ret << endl;
        }

        else if(cmd == 3){
            cout << "current size : " << cq.size() << endl; 
        }

        else if(cmd == 4){
            cout << "current front : " << cq._front() << endl;

        }

        else if(cmd == 5){
            cout << "current rear : " << cq._rear() << endl;
        }
    }

    

    return 0;
}
