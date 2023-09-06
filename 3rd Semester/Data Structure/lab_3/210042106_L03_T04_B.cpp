//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>

using namespace std;

std::vector<int> findTallerClockwise(const std::vector<int>& heights) {
    int n = heights.size();
    std::vector<int> result(n, -1); // Initialize result vector with -1
    
    for (int i = 0; i < n; ++i) {
        int current_height = heights[i];
        for (int j = 1; j < n; ++j) {
            int next_index = (i + j) % n; // Calculate the next person's index in a clockwise manner
            if (heights[next_index] > current_height) {
                result[i] = heights[next_index];
                break;
            }
        }
    }
    
    return result;
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
        vector<int> v1;
        int inp;
        while(true){
            cin >> inp;
            if(inp != -1){
                v1.push_back(inp);
            }
            else{
                break;
            }
        }
        vector<int> v2 = findTallerClockwise(v1);

        //print v2
        for(int i = 0; i < v2.size(); i++){
            cout << v2[i] << " ";
        }

        cout << "\n";

    }


    
    return 0;
}