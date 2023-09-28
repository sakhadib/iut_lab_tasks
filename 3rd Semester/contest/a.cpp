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
        string s;
        cin >> s;
        if(s[0] == 'a' || s[1] == 'b' || s[2] == 'c'){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    
    return 0;
}