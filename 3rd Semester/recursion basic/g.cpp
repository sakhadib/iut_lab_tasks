//Adib Sakhawat - sakhadib
//IUT, 2023

#include <iostream>
using namespace std;

bool isHardToRead(string s){
    bool yes = false;
    for(int i = 0; i < s.size(); i++){
        if(i%2 == 0 ){
            if(s[i] >= 'a' && s[i] <= 'z'){
                yes = true;
            }
            else{
                return false;
            }
        }
        else{
            if(s[i] >= 'A' && s[i] <= 'Z'){
                yes = true;
            }
            else{
                return false;
            }
        }
    }

    return yes;
}

int main() {
    // // Redirect input from input.txt
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("output.txt");
    // cout.rdbuf(out.rdbuf());


    string s;
    cin >> s;

    if(isHardToRead(s)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}