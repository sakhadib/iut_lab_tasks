//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[] = {1, 2, 3, 5, 5, 7, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int count = 0;

    cout << "Array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    int arr2[100000] = {0};
    for(int i=0; i<size; i++){
        arr2[arr[i]]++;
    }

    for(int i=0; i<100000; i++){
        int go = target - i;
        if(arr2[go] > 0){
            count++;
            cout << "\n" << i << " + " << go << " = " << target << endl;
            arr2[go]--;
        }
    }

    cout << "\nTotal pairs: " << count << endl;

    return 0;
}