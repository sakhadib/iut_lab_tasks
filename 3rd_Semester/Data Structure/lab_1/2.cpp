//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>

using namespace std;


int main() {

    int arr[] = {8, 7, 2, 5, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int count = 0;

    cout << "Array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    int arr2[20] = {0};
    for(int i=0; i<size; i++){
        arr2[arr[i]]++;
    }

    for(int i = 0; i<20; i++){
        if(target > i){
            int q = target - i;
            if(arr2[q] > 0 && q > i){
                count++;
                cout << "\nPair: " << q << " " << i << endl;
            }
        }
    }

    if(count == 0){
        cout << "\nNo pair found!" << endl;
    }
    else{
        cout << "\nTotal pairs: " << count << endl;
    }

    return 0;
}