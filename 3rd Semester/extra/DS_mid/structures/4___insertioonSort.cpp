//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int size){
    for(int i = 1; i < size; i++){
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main() {

    int array[10] = {10, 9, 8, 7, 6, 5, 4, 3 , 2, 1};
    insertionSort(array, 10);
    for(int i = 0; i < 10; i++){
        cout << array[i] << " ";
    }
    
    return 0;
}

/*
    Insertion Sort
    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/