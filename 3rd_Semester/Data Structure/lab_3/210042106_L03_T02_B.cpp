//Adib Sakhawat - sakhadib
//IUT, 2023

#include <iostream>
#include <stack>
#include <string>
#include<cctype>
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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while(t--){
        getline(cin,s);
        if(isValid(s)){
            cout << "Status : Valid\n";
        }
        else{
            cout << "Status : Invalid\n";
        }
    }

    
    return 0;
}