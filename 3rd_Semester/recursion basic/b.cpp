//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

//recursive fibonacci function using memoization
int fib(int n){
    //base case
    if(n == 0 || n == 1){
        return n;
    }

    //recursive case
    return fib(n - 1) + fib(n - 2);
}


int main() {
    // // Redirect input from input.txt
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("output.txt");
    // cout.rdbuf(out.rdbuf());

    int n;
    cin >> n;

    cout << fib(n) << endl;
    
    return 0;
}