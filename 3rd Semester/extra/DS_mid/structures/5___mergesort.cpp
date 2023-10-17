//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1], right[n2];
    for(int i = 0; i < n1; i++){
        left[i] = a[low + i];
    }
    for(int i = 0; i < n2; i++){
        right[i] = a[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;
    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            a[k] = left[i];
            i++;
        }
        else{
            a[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        a[k] = left[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = right[j];
        j++;
        k++;
    }
}

int main() {

    int array[10] = {10, 9, 8, 7, 6, 5, 4, 3 , 2, 1};
    merge(array, 0, 4, 9);
    return 0;
}

/*
    Merge Sort
    Time Complexity: O(n log n)
    Space Complexity: O(n)

    explaination about merge sort: https://www.youtube.com/watch?v=JSceec-wEyw
*/