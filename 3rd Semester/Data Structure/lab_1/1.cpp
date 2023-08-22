//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>

using namespace std;

void sort(int arr[], int size) {
    
    int arr2[100000] = {0};
    for(int i=0; i<size; i++){
        arr2[arr[i]]++;
    }

    vector<int> v;
    for(int i=0; i<100000; i++){
        for(int j=0; j<arr2[i]; j++){
            v.push_back(i);
        }
    }

    for(int i=0; i<size; i++){
        arr[i] = v[i];
    }

    
}

int main() {

    int arr[] = {8, 7, 2, 5, 3, 1, 8, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    sort(arr, size);

    cout << "\n\nSorted Array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    
    return 0;
}