//Adib Sakhawat - sakhadib
//IUT, 2023

#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;

bool isValid(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']' ){
            if(!st.empty()){
                char x = st.top();
                if(s[i] == '}' && x != '{'){
                    return false;
                }
                else if(s[i] == ')' && x != '('){
                    return false;
                }
                else if(s[i] == ']' && x != '['){
                    return false;
                }

                st.pop();
            }
            else{
                return false;
            }
        }
    }

    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
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
        string s;
        cin >> s;
        if(isValid(s)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }





    
    return 0;
}