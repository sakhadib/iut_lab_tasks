//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

void fibo(int n, int a = 0, int b = 1) {
    if (n == 0)
        return;
    cout << a << " ";
    fibo(n - 1, b, a + b);
}

int main() {

    fibo(10);
    return 0;
}