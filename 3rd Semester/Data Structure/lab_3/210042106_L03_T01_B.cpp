#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

class mystack{
    public:
        int *arr;
        int count;
        int capacity;

        mystack(int capacity){
            this->capacity = capacity;
            this->arr = new int[capacity];
            this->count = -1;
        }

        void push(int key){
            if(count == capacity - 1){
                cout << "Stack is Full" << endl;
                return;
            }
            count++;
            arr[count] = key;
        }

        void pop(){
            if(count == -1){
                cout << "Stack is Empty" << endl;
                return;
            }
            count--;
        }

        int top(){
            if(count == -1){
                cout << "Stack is Empty" << endl;
                return -1;
            }
            return arr[count];
        }

        bool isEmpty(){
            if(count == -1){
                return true;
            }
            return false;
        }

        int size(){
            return count + 1;
        }

        bool isFull(){
            if(count == capacity - 1){
                return true;
            }
            return false;
        }

        void print(){
            if(count == -1){
                cout << "Stack Underflow" << endl;
                return;
            }
            for(int i = 0; i <= count; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

/**
 * Choise:
 * 1 -> push
 * 2 -> pop
 * 3 -> isEmpty
 * 4 -> isFull
 * 5 -> top
 * 6 -> size
*/

int main(){

    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());


    int max;
    cin >> max;
    mystack s1(max);

    while (true)
    {
        int command;
        cin >> command;
        if(command == -1){
            break;
        }

        else if(command == 1){
            if(s1.isFull()){
                cout << "Overflow" << endl;
            }
            else{
                int key;
                cin >> key;
                s1.push(key);
                s1.print();
            }
        }

        else if(command == 2){
            if(s1.isEmpty()){
                cout << "UnderFlow" << endl;
            }
            else{
                s1.pop();
                s1.print();
            }
        }

        else if(command == 3){
            if(s1.isEmpty()){
                cout << "True" << endl;
            }
            else{
                cout << "False" << endl;
            }
        }

        else if(command == 4){
            if(s1.isFull()){
                cout << "True" << endl;
            }
            else{
                cout << "False" << endl;
            }
        }

        else if(command == 6){
            if(s1.isEmpty()){
                cout << "Underflow" << endl;
            }
            else{
                cout << "Top : " << s1.top() << endl;
            }
        }

        else if(command == 5){
            cout << "Size : " << s1.size() << endl;
        }
    }
    

}
