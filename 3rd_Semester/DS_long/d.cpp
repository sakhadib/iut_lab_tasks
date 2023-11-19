//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

string decryptResult(const string &sequence) {
    if (sequence == "1" || sequence == "4" || sequence == "78") {
        return "+";
    } else if (sequence.size() >= 2 && sequence[sequence.size() - 2] == '3' && sequence[sequence.size() - 1] == '5') {
        return "-";
    } else if (sequence.size() >= 3 && sequence[0] == '9' && sequence[sequence.size() - 1] == '4') {
        return "*";
    } else if (sequence.size() >= 3 && sequence.substr(0, 3) == "190") {
        return "?";
    } else {
        return "?";  // If none of the above conditions match
    }
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
    cin.ignore();  // Clear newline from the previous input

    while(t--){
        string sequence;
        getline(cin, sequence);
        string result = decryptResult(sequence);
        cout << result << endl;
    }

    
    return 0;
}