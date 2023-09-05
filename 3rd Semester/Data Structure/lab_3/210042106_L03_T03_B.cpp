//Adib Sakhawat - sakhadib
//IUT, 2023

#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <fstream>
#include <algorithm>
using namespace std;

string rmvadjcnt(string s){
    string ret = "";
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(!st.empty() && s[i] == st.top()){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }

    while (!st.empty()){
        ret += st.top();
        st.pop();
    }
    reverse(ret.begin(), ret.end());
    return ret;
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
    while (t--)
    {
        string s;
        cin >> s;
        string new_s = rmvadjcnt(s);

        cout << "[" << new_s << "]" << endl;
    }
    


    
    return 0;
}