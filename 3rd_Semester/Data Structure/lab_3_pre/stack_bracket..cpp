//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if(!st.empty())
            {
                char x = st.top();
                if(s[i] == '}' && x != '{')
                {
                    return false;
                }
                else if(s[i] == ')' && x != '(')
                {
                    return false;
                }
                else if(s[i] == ']' && x != '[')
                {
                    return false;
                }

                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
    } 
}

int main() {
    string s;
    cin >> s;
    if(isValid(s))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}