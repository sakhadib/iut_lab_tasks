//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

const int n = 10;

void print(int i){
    if(i > 10){
        return;
    }
    cout <<  i << "\t";
    i++;
    print(i);
}

int main() {
    
    print(1);
    return 0;
}