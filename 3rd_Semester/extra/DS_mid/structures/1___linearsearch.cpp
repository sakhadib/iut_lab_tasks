//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int size, int key){
    for(int i = 0; i < size; i++){
        if(a[i] == key){
            return i;
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

    cout << linearSearch(array, 10, 5) << endl;
    
    return 0;
}

/*
    Linear Search
    Time Complexity: O(n)
    Space Complexity: O(1)

    ! linear search can be applied on both sorted and unsorted arrays
*/