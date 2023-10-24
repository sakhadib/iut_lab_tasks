//Adib Sakhawat - sakhadib
//IUT, 2023

#include <iostream>
#include <fstream>
using namespace std;

int orthogonality(int a[], int b[], int n){
    
    //base case
    if(n==0){
        return 0;
    }

    //recursive case
    int state = a[n-1] * b[n-1];
    
    return state + orthogonality(a, b, n-1);
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

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int b[n];
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    if(orthogonality(a, b, n) == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}