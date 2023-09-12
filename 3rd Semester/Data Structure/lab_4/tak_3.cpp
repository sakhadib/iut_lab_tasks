//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

queue<int> requests;

int ping(int t) {
    while (!requests.empty() && requests.front() < t - 3000) {
        requests.pop();
    }

    requests.push(t);
    
    return requests.size();
}

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());


    cout << ping(1) << "\n";
    cout << ping(2) << "\n";
    cout << ping(3) << "\n";
    cout << ping(4) << "\n";
    cout << ping(3001) << "\n";
    cout << ping(3002) << "\n";
    cout << ping(3003) << "\n";
    cout << ping(6003) << "\n";
    cout << ping(10003) << "\n";

    return 0;
}