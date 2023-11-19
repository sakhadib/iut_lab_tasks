#include <bits/stdc++.h>
using namespace std;

// Create an array to store calculated Fibonacci numbers
const int MAX = 100;
int fib[MAX];

// Initialize the array with -1 (indicating that values haven't been calculated yet)
void initialize() {
    for (int i = 0; i < MAX; i++) {
        fib[i] = -1;
    }
}

// Memoized recursive Fibonacci function
int fibMemo(int n) {
    if (fib[n] == -1) {
        if (n <= 1) {
            fib[n] = n;
        } else {
            fib[n] = fibMemo(n - 1) + fibMemo(n - 2);
        }
    }
    return fib[n];
}

int main() {
    int n;
    cin >> n;
    
    initialize(); // Initialize the memoization array
    cout << fibMemo(n) << endl;
    
    return 0;
}
