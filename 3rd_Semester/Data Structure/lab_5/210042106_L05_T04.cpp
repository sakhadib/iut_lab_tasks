//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

double calculateEF(double AD, double BC, double CD) {
    // Calculate AC and BD
    double AC = sqrt(AD * AD + CD * CD);
    double BD = sqrt(BC * BC + CD * CD);

    // Calculate DE and BE
    double DE = sqrt(AD * AD - AC * AC);
    double BE = sqrt(BC * BC - AC * AC);

    // Calculate EF using the Pythagorean theorem
    double EF = sqrt(DE * DE + (CD - BE) * (CD - BE));

    return EF;
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
        double AD, BC, EF;
        cin >> AD >> BC >> EF;
        
        double max = min(AD, BC);
        double min = 0;
        cout << calculateEF(AD, BC, max/2) << endl;
        double CD;
        while(0){
            CD = (max + min) / 2;
            double calculated_EF = calculateEF(AD, BC, CD);

            if(abs(calculated_EF - EF) < 0.1){
                break;
            }
            else if(calculated_EF > EF){
                min = CD;
            }
            else if(calculated_EF < EF){
                max = CD;
            }

            cout << calculated_EF << endl;
        }

        cout << CD << endl;
    }


    
    return 0;
}