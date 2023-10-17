//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

double factorial(double n){
    if(n == 0) return 1;

    return n * factorial(n-1);
}

int main() {

    cout << factorial(5) << endl;
    return 0;
}