//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

double calculateArea(double side1, double side2, double side3){
    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
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
        double xy, yz, zx, ratio;
        cin >> xy >> yz >> zx >> ratio;

        double min = 0;
        double max = xy;
        double XL;

        while(1){
            XL = (min + max) / 2;
            double LM = yz * (XL / xy);
            double XM = zx * (XL / xy);
            double area = calculateArea(XL, LM, XM);
            double TotalArea = calculateArea(xy, yz, zx);
            double newRatio = area / (TotalArea - area);
            if(abs(newRatio - ratio) < 0.000001){
                break;
            }
            else if(newRatio > ratio){
                max = XL;
            }
            else if(newRatio < ratio){
                min = XL;
            }
        }
        cout << XL << endl;
    }


    
    return 0;
}