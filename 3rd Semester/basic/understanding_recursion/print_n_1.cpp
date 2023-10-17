//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

const int n = 5;
void print(int i){
    if(i > n){
        return;
    }
    print(i+1);
    cout << i << "  ";
}

int main() {
    print(1);
    
    return 0;
}