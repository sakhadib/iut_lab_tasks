//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int size, int key){
    int low = 0, high = size - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());


    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};

    
    return 0;
}

/*
    Binary Search
    Time Complexity: O(log n)
    Space Complexity: O(1)

    ! binary search can only be applied on sorted arrays
*/