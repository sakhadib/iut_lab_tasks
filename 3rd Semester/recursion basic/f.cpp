//Adib Sakhawat - sakhadib
//IUT, 2023

#include <iostream>
using namespace std;

int main() {
    // // Redirect input from input.txt
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("output.txt");
    // cout.rdbuf(out.rdbuf());


    int N, S, D;
    cin >> N >> S >> D;

    bool found = false;

    for(int i=0; i<N; i++){

        int X, Y;
        cin >> X >> Y;

        if(X < S && Y > D){
            found = true;
        }
    }

    if(found){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    
    return 0;
}