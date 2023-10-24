#include <iostream>
#include <cstdio>
using namespace std;

// Function to calculate the sum of digits in a string
int sumDigits(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += s[i] - '0'; // Convert char to int
    }
    return sum;
}

// Recursive function to calculate the super digit
int superDigit(string n, int k) {
    // If n is a single digit, return it
    if (n.length() == 1) {
        return n[0] - '0';
    }
    
    // Calculate the sum of digits in n
    int digitSum = sumDigits(n);
    
    // Multiply the sum by k
    digitSum *= k;
    
    // Convert the sum back to a string and recursively calculate its super digit
    char temp[10];
    sprintf(temp, "%d", digitSum);
    string newN = temp;
    return superDigit(newN, 1);
}

int main() {
    string n;
    int k;
    cin >> n >> k;
    
    int result = superDigit(n, k);
    cout << result << endl;
    
    return 0;
}
