#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
    // // Redirect input from input.txt
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("output.txt");
    // cout.rdbuf(out.rdbuf());

    int n;
    while (cin >> n) {
        vector<int> sequence(n);
        set<int> differences;

        for (int i = 0; i < n; i++) {
            cin >> sequence[i];
        }

        for (int i = 1; i < n; i++) {
            int diff = abs(sequence[i] - sequence[i - 1]);
            if (diff >= 1 && diff <= n - 1) {
                differences.insert(diff);
            }
        }

        if (differences.size() == n - 1) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }

    return 0;
}
