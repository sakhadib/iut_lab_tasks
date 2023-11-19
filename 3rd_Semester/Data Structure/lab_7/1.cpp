//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

//print array
void print(int arr[], int n){
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());


    int t;
    cin >> t;
    while(t--){

        int n, m;
        cin >> n >> m;
        
        int arr[n+1];
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        //print(arr, n);

        for(int i = 0; i < m; i++){
            int key;
            cin >> key;
            if(key == 1){
                int x, y;
                cin >> x >> y;
                for(int i = 1; i <= n; i++){
                    if(arr[i] == x){
                        arr[i] = y;
                    }
                }
                print(arr, n);
            }
            else{
                int x;
                cin >> x;
                cout << arr[x] << "\n";
            }
        }
        
    }

    
    return 0;
}


/**
 * Input
 * 1
 * 5 4
 * 1 2 3 4 5
 * 1 1 3
 * 2 1
 * 1 3 5
 * 2 1
*/

/**
 * Output
 * 3 2 3 4 5 
 * 3
 * 5 2 5 4 5 
 * 5
*/