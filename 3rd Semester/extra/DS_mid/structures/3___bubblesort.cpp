//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {

    int array[10] = {10, 9, 8, 7, 6, 5, 4, 3 , 2, 1};
    bubbleSort(array, 10);
    for(int i = 0; i < 10; i++){
        cout << array[i] << " ";
    }
    return 0;
}

/*
    Bubble Sort
    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/