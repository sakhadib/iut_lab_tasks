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


    string s;
    cin >> s;

    stack<char> st;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if( st.top() == '(' && s[i] == ')')
            {
                st.pop();
            }
            else if(st.top() == '{' && s[i] == '}'){
                st.pop();
            }
            else if(st.top() == '[' && s[i] == ']'){
                st.pop();
            }
        }
    }


    if(st.empty()){
        cout << "Valid";
    }
    else{
        cout << "invalid";
    }

    
    return 0;
}