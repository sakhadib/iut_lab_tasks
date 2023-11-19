#include <iostream>
#include <queue>

using namespace std;

queue<int> q;


void push_s(int x) {
    q.push(x);
    int n = q.size();

    for (int i = 0; i < n - 1; i++) {
        int front = q.front();
        q.pop();
        q.push(front);
    }
}


void pop_s() {
    if (!q.empty()) {
        q.pop();
    }
}


int top_s() {
    if (!q.empty()) {
        return q.front();
    }
    return -1;
}


bool empty_s() {
    return q.empty();
}

int main() {
    push_s(10);
    cout << top_s() << endl;
    push_s(20);
    cout << top_s() << endl;
    pop_s();
    cout << top_s() << endl;
    push_s(100);
    cout << top_s() << endl;
    cout << empty_s() << endl;
    pop_s();
    pop_s();
    cout << empty_s() << endl;
}
