//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

string returnGrade(int marks){
    if(marks >= 80)
        return "A+";
    else if(marks >= 75)
        return "A";
    else if(marks >= 70)
        return "A-";
    else if(marks >= 65)
        return "B+";
    else if(marks >= 60)
        return "B";
    else if(marks >= 55)
        return "B-";
    else if(marks >= 50)
        return "C";
    else if(marks >= 45)
        return "D";
    else
        return "F";
}

int main() {
    // // Redirect input from input.txt
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("output.txt");
    // cout.rdbuf(out.rdbuf());

    int t;
    int caseNo = 1;
    cin >> t;
    while(t--){
        int mark;
        cin >> mark;
        cout << "Case " << caseNo << ": " << returnGrade(mark) << endl;
        caseNo++;
    }


    
    return 0;
}