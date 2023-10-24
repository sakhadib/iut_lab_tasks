//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());


    int n, m;
    cin >> n >> m;
    char arr[n+1][n+1];

    //Initialize
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            arr[i][j] = ' ';
        }
    }

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        arr[x][y] = 'X';
        arr[y][x] = 'X';
    }

    //Matrix view
    cout << "Matrix View:  \n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    //List view
    cout << "\n\nList View:  \n";
    for(int i = 1; i <= n; i++){
        cout << i << ": ";
        for(int j = 1; j <= n; j++){
            if(arr[i][j] == 'X'){
                cout << j << " ";
            }
        }
        cout << "\n";
    }



    
    return 0;
}