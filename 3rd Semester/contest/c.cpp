//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

int points(int i, int j){

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
        // Read the 10x10 grid for each test case
        char grid[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }

        // Initialize points and multipliers for rings
        int points = 0;
        int multipliers[] = {1, 2, 3, 4, 5};

        // Calculate points for each cell and accumulate the total points
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                int givei = i%5;
                int givej = j%5;
                if(grid[i][j] == 'X' && (i>5 && j>5)){
                    givei = 4 - givei;
                    givej = 4 - givej;
                    points += multipliers[max(givei, givej)];
                }
                else if (grid[i][j] == 'X' && (givei != 0 || givei != 4) && (givej != 0 || givej != 4)) {
                    points += multipliers[min(givei, givej)];
                }
                else if (grid[i][j] == 'X' && (givei == 0 || givei == 4) && (givej == 0 || givej == 4)) {
                    points += 5;
                }
                
            }
        }

        // Output the total points for this test case
        cout << points << endl;
    }

    return 0;
}