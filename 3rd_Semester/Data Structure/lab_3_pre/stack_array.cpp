//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

class mystack{
    public:
        int *arr;
        int top;
        int capacity;

        mystack(int capacity){
            this->capacity = capacity;
            this->arr = new int[capacity];
            this->top = -1;
        }

        void push(int key){
            if(top == capacity - 1){
                cout << "Stack is Full" << endl;
                return;
            }
            top++;
            arr[top] = key;
        }

        void pop(){
            if(top == -1){
                cout << "Stack is Empty" << endl;
                return;
            }
            top--;
        }

        int topp(){
            if(top == -1){
                cout << "Stack id Empty" << endl;
                return -1;
            }
            return arr[top];
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            return false;
        }

        void print(){
            if(top == -1){
                cout << "Stack Underflow" << endl;
                return;
            }
            for(int i = top; i >= 0; i--){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    mystack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);

    s1.print();

    s1.pop();

    if(s1.isEmpty()){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }

    s1.pop();
    s1.pop();

    if(s1.isEmpty()){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }
    return 0;
}