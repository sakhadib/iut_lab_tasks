//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

//recursive function to find the sum of the array
int sum(int array[], int n, int index){
    //base case
    if(index == n){
        return 0;
    }

    //recursive case
    return array[index] + sum(array, n, index + 1);
}



int main() {
    // // Redirect input from input.txt
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("output.txt");
    // cout.rdbuf(out.rdbuf());


    int t;
    cin >> t;
    int ncase = 1;
    while(t--){
        int n;
        cin >> n;

        int array[n];
        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        int thissum = sum(array, n, 0);

        cout << "Case " << ncase << ": " << thissum << endl;
        ncase++;

    }
    return 0;
}