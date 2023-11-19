//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std; 

void findTallerClockwise(const int heights[], int n) {
    stack<int> st;
    
    for (int i = 0; i < n; ++i) {
        int current_height = heights[i];

        // Pop elements from the stack while they are smaller than the current height
        while (!st.empty() && heights[st.top()] < current_height) {
            int taller_index = st.top();
            st.pop();
            cout << heights[taller_index] << " ";
        }

        // Push the current index onto the stack
        st.push(i);
    }

    // Handle remaining elements in the stack (circular manner)
    while (!st.empty()) {
        int taller_index = st.top();
        st.pop();
        cout << heights[taller_index] << " ";
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

    while (t--) {
        int n;
        cin >> n;
        int heights[n];

        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }

        findTallerClockwise(heights, n);

        cout << "\n";
    }

    return 0;
}    