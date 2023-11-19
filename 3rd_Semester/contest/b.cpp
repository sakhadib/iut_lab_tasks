//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Redirect input from input.txt
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("output.txt");
    // cout.rdbuf(out.rdbuf());

    int t;
    cin >> t;
    while(t--){
        int n, min = 100000000, minIDX;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < min){
                min = a[i];
                minIDX = i;
            }
        }

        long long product = 1;
        a[minIDX]++;
        for(int i = 0; i < n; i++){
            product *= a[i];
        }

        cout << product << endl;

    }


    
    return 0;
}