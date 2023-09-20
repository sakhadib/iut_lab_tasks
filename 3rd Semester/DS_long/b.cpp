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
    int caseno = 1;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        int res = x + y + z;
        printf("Case %d: Sum of %d, %d and %d is %d\n", caseno, x, y, z, res);
        caseno++;
    }


    
    return 0;
}